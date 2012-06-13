case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C1"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH = -I"\$(EIF_GAME_LIB)/C_more/include" -I/usr/include/SDL -I/usr/include/AL -D_GNU_SOURCE=1 -D_REENTRANT 
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $ccflags $large -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $cppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $windows_flags
LDSHAREDFLAGS =  $ldsharedflags
EIFLIB = "$rt_lib/$prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $libs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = cpf$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C1_c.o 

OLDOBJECTS =  ap837.o ap837d.o ap837f.o ga863.o ga863d.o ga863f.o ga844.o \
	ga844d.o ga844f.o ga843.o ga843d.o ga843f.o ga864.o ga864d.o ga864f.o \
	ga849.o ga849d.o ga849f.o ga862.o ga862d.o ga862f.o ga848.o ga848d.o \
	ga848f.o ga842.o ga842d.o ga842f.o ga841.o ga841d.o ga841f.o ga865.o \
	ga865d.o ga865f.o ga840.o ga840d.o ga840f.o ga867.o ga867d.o ga867f.o \
	ga861.o ga861d.o ga861f.o ga866.o ga866d.o ga866f.o cp839.o cp839d.o \
	cp839f.o ga860.o ga860d.o ga860f.o c_838.o c_838d.o c_838f.o ti853.o \
	ti853d.o ti853f.o du868.o du868d.o du868f.o ti852.o ti852d.o ti852f.o \
	da859.o da859d.o da859f.o da854.o da854d.o da854f.o ti851.o ti851d.o \
	ti851f.o gr847.o gr847d.o gr847f.o da857.o da857d.o da857f.o co858.o \
	co858d.o co858f.o ti850.o ti850d.o ti850f.o da856.o da856d.o da856f.o \
	da855.o da855d.o da855f.o da846.o da846d.o da846f.o da845.o da845d.o \
	da845f.o 

all: Cobj1.o

Cobj1.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj1.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

