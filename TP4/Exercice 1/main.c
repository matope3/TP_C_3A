#include "fonctions.h"



int main(int argc,char * argv[])
{
	int T[10];
	lireDonnees(argv[1],T);
	afficherTableau(T,10);
	triABulles(T,10);
	afficherTableau(T,10);
	enregistrerDonnees(argv[2],T,10);
	
	return(0);
}



