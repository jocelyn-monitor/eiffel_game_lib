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
echo "Compiling C code in C2"
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

OBJECTS = big_file_C2_c.o 

OLDOBJECTS =  ga882.o ga882d.o ga882f.o ga886.o ga886d.o ga886f.o ga878.o \
	ga878d.o ga878f.o ga884.o ga884d.o ga884f.o cp885.o cp885d.o cp885f.o \
	ga873.o ga873d.o ga873f.o ga883.o ga883d.o ga883f.o ga877.o ga877d.o \
	ga877f.o ga881.o ga881d.o ga881f.o ga876.o ga876d.o ga876f.o ga875.o \
	ga875d.o ga875f.o ga880.o ga880d.o ga880f.o ti893.o ti893d.o ti893f.o \
	ga887.o ga887d.o ga887f.o ga874.o ga874d.o ga874f.o ti871.o ti871d.o \
	ti871f.o da891.o da891d.o da891f.o ab872.o ab872d.o ab872f.o ti892.o \
	ti892d.o ti892f.o da896.o da896d.o da896f.o da889.o da889d.o da889f.o \
	da895.o da895d.o da895f.o fi890.o fi890d.o fi890f.o in897.o in897d.o \
	in897f.o da870.o da870d.o da870f.o da869.o da869d.o da869f.o da894.o \
	da894d.o da894f.o da879.o da879d.o da879f.o da888.o da888d.o da888f.o 

all: Cobj2.o

Cobj2.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj2.o $(OBJECTS)
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

