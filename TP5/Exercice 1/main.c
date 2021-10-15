#include "fraction.h"

int main(){
	
	Fraction fa,fb;
	char choix;
	printf("Entrez deux fractions et l'operation ( n/d n/d op ) : ");
	scanf("%d/%d %d/%d %c", &fa.num, &fa.den, &fb.num, &fb.den,&choix);
	printf("Le resultat est : ");
	switch(choix){
		case ('+'): addFraction(fa,fb); break;
		case ('-'): subFraction(fa,fb); break;
		case ('*'): mulFraction(fa,fb); break;
		case ('/'): divFraction(fa,fb); break;
		}
	
	return 0;
	}