# exercice 1

OPTIONS = -ansi -pedantic -Wall

all : fraction.o main.o
	gcc fraction.o main.o -o exec

main.o : main.c
	gcc -c main.c $(OPTIONS) -o main.o 
	
fraction.o : fraction.c fraction.h
	gcc -c fraction.c $(OPTIONS) -o fraction.o 
	
clean :
	rm *.o
	
zip :
	tar -zcvg exercice1.tar.gz *c *h makefile