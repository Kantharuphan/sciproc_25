CC = gcc # C compiler
CCFLAGS = -O3 #compiler flags
LDFLAGS = -lm #linking flags

all: matmultc

matmultc: main.o mm.o
	$(CC) -o $@ $^ $(LDFLAGS)

mm.o: mm.c
	$(CC) -c $(CCFLAGS) $<

main.o: main.c
	$(CC) -c $(CCFLAGS) $<

clean:
	rm *.o 
