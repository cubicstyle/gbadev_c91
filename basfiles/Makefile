TARGET = libstd

DEVKITPATH = /usr/local/devkitadv/bin/

CC = $(DEVKITPATH)arm-agb-elf-gcc
LD = $(DEVKITPATH)arm-agb-elf-gcc
AS = $(DEVKITPATH)arm-agb-elf-as
AR = $(DEVKITPATH)arm-agb-elf-ar


CFLAGS	= -c -Wall -marm -fomit-frame-pointer -O2
MODEL = -v -mthumb -mthumb-interwork
AFLAGS = rus

OBJFILES =  sprite.o

all : $(TARGET).a

clean :
	rm -f *.o $(TARGET).a

$(TARGET).a : $(OBJFILES)
	$(AR) $(AFLAGS) $(TARGET).a $(OBJFILES)

.c.o:		
				$(CC) $(CFLAGS) $< -mthumb-interwork

