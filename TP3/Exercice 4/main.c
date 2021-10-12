#include "fonctions.h"



int main()
{
	/* Création de la matrice*/
	int A[2][3];
	int B[2][3];
	int R[2][2];
	int T[3][2];
	int n = 2;
	int m = 3;
	
	initMatrice(A,n,m);
	initMatrice(B,n,m);
	/*additionnerMatrices(A,B,n,m,R);*/
	
	transposee(B,n,m,T);
	produitMat(A,T,n,m,R);
	afficherMatriceC(R,n,n);	
	
	
	
	/* Question 2 :
	
	Addition : 
		Résultat : 3 - 3  5
			   4  10 -3
		
		- Les matrices doivent être de même taille
		- La matrice résultat fait la même taille que les matrices de bases	
	
	Transposée :
		Résultat : 1 -1
			   0  2
			   4 -5
		- La taille de la matrice résultat est celle de la matrice d'origine en inversant ligne et colonnes
		
	Produit matriciel :
		Résultat :  12  17
			   -11 -23
	
		- Le nombre de colonne de la premiere matrice soit egal au nombre de lignes de la deuxieme
		- la matrice résultat à le nombre de ligne de la premiere matrice le nombre de colonne de la deuximeme matrice 
		
		
	
	*/
	
	
	
	return(0);
}



