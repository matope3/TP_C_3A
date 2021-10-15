#ifndef __POLYNOME_H__
#define __POLYNOME_H__
#include <stdio.h>
#include <stdlib.h>
#define NBMAX 100

typedef struct {
	int degre ;
	float coeff ;
} Terme ;

typedef Terme Polynome[NBMAX];

void addPolynomes (Polynome p1, Polynome p2, Polynome res);
void affPoly(Polynome p);
void creerPoly(Polynome p);


#endif