CC = gcc
LIBS = -lm
CFLAGS = -Wall -g

EXE = exe/
PRG = bisection newton-raphson secant lagrange newton-ip regula-falsi gauss-jordan matrix-inversion

%: %.c
	$(CC) $@.c -o $(EXE)$@ $(CFLAGS) $(LIBS)

all: $(PRG)

clean:
	rm 	-f $(EXE)/*
