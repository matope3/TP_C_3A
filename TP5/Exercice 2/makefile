# exercice 1

OPTIONS = -ansi -pedantic -Wall

all : polynome.o main.o
	gcc polynome.o main.o -o exec -lm

main.o : main.c
	gcc -c main.c $(OPTIONS) -o main.o 
	
fonctions.o : polynome.c polynome.h
	gcc -c polynome.c $(OPTIONS) -o polynome.o 
	
clean :
	rm *.o
	
zip :
	tar -zcvg exercice1.tar.gz *c *h makefile