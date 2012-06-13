note
	description : "Mouse-text application root class"
	date        : "$Date$"
	revision    : "$Revision$"

class
	APPLICATION

create
	make

feature {NONE} -- Initialization

	make
		local
			controller:GAME_LIB_CONTROLLER
		do
			create controller.make
			controller.enable_video
			run_game(controller)
			controller.quit_library
		end

	run_game(controller:GAME_LIB_CONTROLLER)
		local
			custom_file:GAME_PACKAGE_FILE	-- The custom package file that will be use for all ressources files (images and sounds)
		do
			create custom_file.make ("ressources.cpf")		-- Create (open) the custom package file "ressources.cpf
			check custom_file.sub_files_count=7 end		-- Valid that the package has the 7 files in it. (you can valid other information with custom_file.sub_files_infos)

			set_system(controller,custom_file)	-- Set the screen and the events handeler

			show_images(controller,custom_file)	-- Show a background an 2 sprites.

			set_sound (controller,custom_file)	-- Set the sound system to play the music and the sound on space key press

			controller.launch
		end

	set_system(controller:GAME_LIB_CONTROLLER;custom_file:GAME_PACKAGE_FILE)
		local
			icon_trans_color:GAME_COLOR
		do
			controller.event_controller.on_quit_signal.extend (agent on_quit(controller))

			create icon_trans_color.make_rgb(255,0,255)  -- Change the pink for transparent in the window icon (the same as with a file)

			controller.create_screen_surface_with_icon_cpf (custom_file,1, icon_trans_color, 324, 240, 16, true, true, false, true, false) -- Create the window. Dimension: 320x240,
										-- 16 bits per pixel, Use video memory, use hardware double buffer, the windows will be unresisable, the window will have the window frame, not in fullscreen mode.
										-- Use the first index of the package file for window icon (must be a bmp file and must be 32x32 on Windows)

			controller.screen_surface.set_captions ("Exemple Custom Package File", "Ex. CPF")
			controller.event_controller.on_key_down.extend (agent on_key_down_quit(controller,?))
		end

	show_images(controller:GAME_LIB_CONTROLLER;custom_file:GAME_PACKAGE_FILE)
		local
			bk,sprite1,sprite2:GAME_SURFACE_IMG_CPF	-- Use GAME_SURFACE_IMG_CPF instead of GAME_SURFACE_IMG_FILE to use package file
			sprite1_trans_color:GAME_COLOR
		do
			create bk.make (custom_file, 2)						-- The background has been place at index 2 of the custom package file
			create sprite1.make (custom_file, 3)				-- The first sprite (without transparency) is store at index 3 of the package file
			create sprite2.make_with_alpha (custom_file, 4)		-- The second sprite (with transparency) has been place at index 4 of the custom package file

			-- Once the GAME_SURFACE_IMG_CPF object is created, it is use the same way as any GAME_SURFACE object
			create sprite1_trans_color.make_rgb (255, 0, 255)
			sprite1.set_transparent_color (sprite1_trans_color)
			controller.screen_surface.print_surface_on_surface (bk, 0, 0)
			controller.screen_surface.print_surface_on_surface (sprite1, 100, 100)
			controller.screen_surface.print_surface_on_surface (sprite2, 200, 100)
			controller.flip_screen
		end

	set_sound(controller:GAME_LIB_CONTROLLER;custom_file:GAME_PACKAGE_FILE)
		local

			l_music_loop,l_music_intro,l_sound:GAME_AUDIO_SOUND_CPF	-- Use GAME_AUDIO_SOUND_CPF instead of GAME_AUDIO_SOUND_FILE to use package file
			sound_source,music_source:GAME_AUDIO_SOURCE
		do
			controller.enable_sound		-- Enable the sound in the controller

			create l_music_intro.make (custom_file, 5)		-- he music intro is place in the index 5 of the package file.
			create l_music_loop.make (custom_file, 6)	-- The music loop.flac is at index 6 in the custom package file "test.cpf"
			create l_sound.make (custom_file, 7)			-- This sound that will be played when the user press the space bar is at index 7.

			-- One the GAME_AUDIO_SOUND_CPF object is created, it is use the same way as any GAME_AUDIO_SOUND object
			controller.source_add
			music_source:=controller.source_get_last_add
			controller.source_add
			sound_source:=controller.source_get_last_add
			music_source.queue_sound (l_music_intro)
			music_source.queue_sound_infinite_loop (l_music_loop)
			controller.event_controller.on_key_down.extend (agent on_key_down_sound(l_sound,sound_source,?))
			music_source.play
		end



	on_key_down_quit(controller:GAME_LIB_CONTROLLER;kb_event:GAME_KEYBOARD_EVENT)
		do
			if kb_event.is_escape_key then
				controller.stop
			end
		end

	on_key_down_sound(l_sound:GAME_AUDIO_SOUND;sound_source:GAME_AUDIO_SOURCE;kb_event:GAME_KEYBOARD_EVENT)
		do
			if kb_event.is_space_key then
				sound_source.stop
				l_sound.restart
				sound_source.queue_sound (l_sound)
				sound_source.play
			end
		end

	on_quit(controller:GAME_LIB_CONTROLLER)
			-- This method is called when the quit signal is send to the application (ex: window X button pressed).
		do
			controller.stop
		end


end
