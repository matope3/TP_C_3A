
OPTION = -Wall -pedantic -ansi

all : main.o graphlib.o
	gcc graphlib.o main.o -o exec -lX11

graphlib.o : graphlib.c graphlib.h
	gcc -c graphlib.c $(OPTION) -lX11 //usr/lib/X11 -o graphlib.o

main.o : main.c
	gcc -c main.c $(OPTION) -o main.o
