OUTPUT=ps2netemu_gen.exe
OBJS=main.o 
CFLAGS=-Wall -I. --std=gnu99
LDFLAGS=-L. -lstdc++

all: $(OUTPUT)
	rm -f *.o

clean:
	rm -f $(OUTPUT) *.o

$(OUTPUT): $(OBJS)
	$(LINK.c) $(LDFLAGS) -o $@ $^ $(LIBS)
