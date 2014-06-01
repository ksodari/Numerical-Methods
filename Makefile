CC = gcc
LIBS = -lm
CFLAGS = -Wall -g

EXE = exe/
PRG = bisection newton-raphson secant lagrange

%: %.c
	$(CC) $@.c -o $(EXE)$@ $(CFLAGS) $(LIBS)

all: $(PRG)

clean:
	rm 	-f $(EXE)/*
