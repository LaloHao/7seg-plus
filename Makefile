MAIN = main
LIB = segment.h 7seg.h
OBJ = segment.o 7seg.o

CC = g++
CFLAGS=-Wall -g -I.
INCLUDES = $(MAIN).o $(OBJ)
COMPILE = $(CC) $(CFLAGS)

all: clean $(MAIN)

$(MAIN): $(INCLUDES)
	$(COMPILE) $(INCLUDES) $(LIB) -o $(MAIN).bin

.o: %.c $(LIB)
	 $(COMPILE) -c -o $@ $<

clean:
	rm -f *.o $(MAIN).bin
