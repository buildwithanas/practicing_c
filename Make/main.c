# Variables for compiler and flags
CC = gcc
CFLAGS = -Wall -g

# The default target that runs when you just type 'make'
all: main

# Rule to build the executable from the source file
main: main.c
	$(CC) $(CFLAGS) -o main main.c

# Rule to clean up the compiled binary
clean:
	rm -f main
