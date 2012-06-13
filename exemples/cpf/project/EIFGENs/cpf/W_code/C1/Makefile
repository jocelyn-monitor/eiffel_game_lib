INCLUDE_PATH = -I"$(EIF_GAME_LIB)/C_more/include" -I/usr/include/SDL -I/usr/include/AL -D_GNU_SOURCE=1 -D_REENTRANT 
SHELL = /bin/sh
CC = gcc
CPP = g++
CFLAGS = -O0 -pipe -fPIC -D_GNU_SOURCE  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"/usr/local/Eiffel70/studio/spec/linux-x86-64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -fPIC -D_GNU_SOURCE  -DWORKBENCH -I"/usr/local/Eiffel70/studio/spec/linux-x86-64/include" -I. $(INCLUDE_PATH)
LDFLAGS = 
CCLDFLAGS =   
LDSHAREDFLAGS =   -shared -o
EIFLIB = "/usr/local/Eiffel70/studio/spec/linux-x86-64/lib/libwkbench.a"
EIFTEMPLATES = /usr/local/Eiffel70/studio/config/linux-x86-64/templates
LIBS = -lm
MAKE = make
AR = ar
LD = ld
MKDEP = \$(EIFFEL_SRC)/C/mkdep $(DPFLAGS) --
MV = /bin/mv
CP = /bin/cp
RANLIB = :
RM = /bin/rm -f
FILE_EXIST = 
RMDIR = 
X2C = "/usr/local/Eiffel70/studio/spec/linux-x86-64/bin/x2c"
SHAREDLINK = ld
SHAREDLIBS = -lm
SHARED_SUFFIX = .so
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = touch finished 
SYSTEM_IN_DYNAMIC_LIB = cpf.so 

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

