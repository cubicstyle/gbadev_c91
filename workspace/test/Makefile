TARGET = main
BUILD_DIR = ../../build/

DEVKITPATH = ../../devkitadv/
LIBGBA = ../../libgba/
BASFILEPATH = ../../basfiles/

CC = $(DEVKITPATH)bin/arm-agb-elf-gcc
LD = $(DEVKITPATH)bin/arm-agb-elf-gcc
AS = $(DEVKITPATH)arm-agb-elf/bin/as
OBJCOPY = $(DEVKITPATH)bin/arm-agb-elf-objcopy

CFLAGS	= -c -Wall -marm -fomit-frame-pointer -O0 $(INCPATH) -DDEBUG
MODEL = -mthumb -mthumb-interwork

INCPATH = -I$(BASFILEPATH)  -I$(LIBGBA)include/
LIBPATH = -L$(BASFILEPATH) -L$(LIBGBA)lib/
LDFLAGS = -T$(BASFILEPATH)lnkscript
LIBFILE = -lstd -lgba
VBAFLAGS = -0

OBJFILES =  crt0.o visoly.o main.o

OTHER_OBJ = 

.CFILES	= main.c

all : $(TARGET).gba

clean :
	rm -f *.o $(TARGET).gba $(TARGET).elf

run : $(TARGET).gba
	$(VBA) $(TARGET).gba

crt0.o: $(BASFILEPATH)crt0.S
	$(AS) -o $@ $< -mthumb-interwork

visoly.o:  $(BASFILEPATH)visoly.s
	$(AS) -o $@ $< -mthumb-interwork


$(TARGET).gba : $(TARGET).elf
	$(OBJCOPY) -O binary $(TARGET).elf $(BUILD_DIR)$(TARGET).gba

$(TARGET).elf : $(OBJFILES)
	$(LD) -marm -nostdlib -Wl,$(LDFLAGS) -mthumb -mthumb-interwork -o $(TARGET).elf $(OBJFILES) $(OTHER_OBJ) $(LIBPATH) $(LIBFILE)

.c.o:		
				$(CC) $(CFLAGS) $< -mthumb-interwork

