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
			controller.enable_video -- Enable the video functionalities
			controller.enable_text  -- Enable the Text Surface functionnality
			run_game(controller)  -- Run the core creator of the game.
			controller.quit_library  -- Clear the library before quitting
		end

	run_game(controller:GAME_LIB_CONTROLLER)
		local
			l_font:GAME_FONT
		do
			controller.event_controller.on_mouse_button_down.extend (agent on_mouse_down) -- The method on_mouse_down will be execute when a mouse button is pressed
			controller.event_controller.on_mouse_button_up.extend (agent on_mouse_up)  -- The method on_mouse_up will be execute when a mouse button is released
			create l_font.make ("font.ttf", 10)  -- Initialise the font to use in the text print. The process is long. Better doing it only once.
			controller.event_controller.on_mouse_motion_position.extend(agent on_mouse_move(controller,l_font,?,?)) 	-- The method on_mouse_move will be execute when the mouse is moved on the window
																																-- The controller, the font and the color wll be passed to the method.
			controller.event_controller.on_quit_signal.extend (agent on_quit(controller))  -- When the X of the window is pressed, execute the on_quit method.
			rect_start_x:=-1
			rect_start_y:=-1
			controller.create_screen_surface (320, 240, 16, true, true, false, true, false)	-- Create the window. Dimension: 320x240, 16 bits per pixel, Use video memory, use hardware double buffer,
																								-- the windows will be unresisable, the window will have the window frame, not in fullscreen mode.
			on_mouse_move(controller,l_font,0,0)  -- Show the initial screen layout
			controller.launch  -- The controller will loop until the stop controller.method is called (in method on_quit).
		end

	on_mouse_move(controller:GAME_LIB_CONTROLLER;l_font:GAME_FONT;x,y:NATURAL_16)
			-- This method is called when the mouse move on the window
		local
			l_text_surface:GAME_SURFACE_TEXT
			l_bk_color,l_rect_color,l_font_color:GAME_COLOR
		do

			create l_bk_color.make_rgb (200, 200, 0)  -- Select a color for the background

			controller.screen_surface.fill_rect (l_bk_color, 0, 0, controller.screen_surface.width, controller.screen_surface.height)
							-- Draw a rectangle of the color l_bk_color that take all the screen (the background color).
			if rect_start_x/=-1 then
				create l_rect_color.make_rgb(0,0,200)  -- Select the color for the mouse rectangle
				controller.screen_surface.fill_rect (l_rect_color, rect_start_x, rect_start_y, x-rect_start_x, y-rect_start_y)  -- Draw the mouse rectangle.
			end
			create l_font_color.make_rgb (0, 0, 0)  -- Initialise the color of the text to print on the screen
			create l_text_surface.make_blended ("("+x.out+","+y.out+")", l_font, l_font_color)  -- Create the surface containing the text to print
			controller.screen_surface.print_surface_on_surface (l_text_surface, 0, 0)  -- Put the Text surface on the screen at (x,y)=(0,0)
			controller.flip_screen  -- Show the screen in the window
		end

	on_mouse_down(is_left_button, is_right_button, is_middle_button: BOOLEAN; mouse_x, mouse_y: NATURAL_16)
			-- This method is called when a mouse button as been pressed on the window
		do
			if is_left_button then  -- If the left button is press
				rect_start_x:=mouse_x.to_integer_32  -- Set the variable rect_start_x
				rect_start_y:=mouse_y.to_integer_32  -- and rect_start_y to the position of the mouse when the button has been pressed
			end
		end

	on_mouse_up(is_left_button, is_right_button, is_middle_button: BOOLEAN; mouse_x, mouse_y: NATURAL_16)
			-- This method is called when a mouse button as been released on the window
		do
			if is_left_button then  -- If the left button is release
				rect_start_x:=-1  -- Remove the value in the rect_start_x
				rect_start_y:=-1  -- and rect_start_y variables.
			end
		end

	on_quit(controller:GAME_LIB_CONTROLLER)
			-- This method is called when the quit signal is send to the application (ex: window X button pressed).
		do
			controller.stop  -- Stop the controller loop (allow controller.launch to return)
		end


	rect_start_x:INTEGER
	rect_start_y:INTEGER

end
