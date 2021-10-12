/* Exercice 2 */

#include <stdio.h>

/*
Pour tester les différents cas on va prendre :
 - 1900 : divisible par 4, par 100 mais pas par 400 => non bissextile
 - 2016 : divisible par 4 mais pas par 100 => bissextile
 - 1600 : divisible par 4, par 100 et par 400 => bissextile
 - 2021 : non divisible par 4 => non bissextile
*/

int main(){

	int annee;
	printf("Entrez une année : ");
	scanf("%d",&annee);
	
	if (annee%4==0){
		if (annee%100==0){
			if (annee%400==0){
				printf ("%d est bissextile",annee);
			} else {
				printf ("%d n'est pas bissextile",annee);
			}
		} else {
			printf ("%d est bissextile",annee);
		}
	} else {
		printf ("%d n'est pas bissextile",annee);
	}
	printf("\n");
	return(0);
}
