/* Exercice 3 */

#include <stdio.h>

int main(){

	int n;
	int i = 0;
	int somme = 0;
	printf("Entrez un entier : ");
	scanf("%d",&n);
	

	while (i<n){
		somme += i;
		i++;
	}
	printf("La somme des %d premiers entier (avec le while) donne : %d \n",n,somme);
	
	i = 0;
	somme = 0;
	do {
		somme += i;
		i++;
	} while (i<n);
	printf("La somme des %d premiers entier (avec le do while) donne : %d \n",n,somme);
	
	return(0);
}

/* Si la valeur entrée par l'utilisateur est négative alors :
 - on ne rentre pas dans la boucle while => somme = 0 
 - on rentre dans la boucle do while on fait un seul tour mais i = 0 au début => somme = 0 (même resultats mais important de faire la différence).


