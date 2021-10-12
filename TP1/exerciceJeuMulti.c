#include <stdio.h>

void jeuMulti(){
	int table=0;
	int i=0;
	int rep;
	int erreur=0;
	
	while (table>9 || table<2){
	printf("Entrez un chiffre entre 2 et 9 : ");
	scanf("%d",&table);
	}
	
	printf("Table de %d \n",table);
	while(erreur == 0 && i<=9){
		printf("%d x %d = ",i+1,table);
		scanf("%d",&rep);
		if (rep!=((i+1)*table)){
			erreur = 1;
		}
		i++;
	}
	
	if (erreur){
		printf("FAUX %d x %d = %d \n",i,table,table*i);
	} else {
		printf("BRAVO \n");
	}
	
}

void jeuMultiPoints(){
	int table=0;
	int i=0;
	int rep;
	int erreur=0;
	
	while (table>9 || table<2){
	printf("Entrez un chiffre entre 2 et 9 : ");
	scanf("%d",&table);
	}
	
	printf("Table de %d \n",table);
	while(i<=9){
		printf("%d x %d = ",i+1,table);
		scanf("%d",&rep);
		if (rep!=((i+1)*table)){
			erreur ++;
		}
		i++;
	}
	
	if (erreur!=0){
		printf("Vous avez fait %d erreurs !\n",erreur);
	} else {
		printf("BRAVO \n");
	}
	
}

int main(){
	jeuMultiPoints();
	return(0);
}
