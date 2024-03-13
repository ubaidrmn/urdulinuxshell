CC = gcc
CFLAGS  = -Wall -g
OBJ = src/shell.o

all: urdushell

urdushell: $(OBJ)
	$(CC) $(CFLAGS) -o urdushell $(OBJ) 
