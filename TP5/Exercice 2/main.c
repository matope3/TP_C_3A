#include "polynome.h"

int main(){
	
	Polynome p1,p2,res;
	creerPoly(p1);
	creerPoly(p2);
	addPolynomes(p1,p2,res);
	affPoly(res);
	
	return 0;
	}