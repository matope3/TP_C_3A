#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void lireDonnees(char nomFichier[], int T[]){
	
	int i = 0;
	
	FILE * fichier = fopen(nomFichier,"r");
	
	if (fichier == NULL){
		printf("erreur lors de l'ouverture du fichier '%s' ",nomFichier);
		exit(1);
	}
	
	
	while (!feof(fichier)){
		fscanf(fichier, "%d" , &T[i]);
		i++;
	}
	
	fclose(fichier);
	
}

void afficherTableau(int T[], int nb){
	int i;
	for (i=0;i<nb;i++){
		printf("%d\t", T[i]);
	}
	printf("\n");
}

void triABulles(int T[], int nb){
	int i,j;
	for (j=0;j<nb-1;j++){
		for (i=0;i<nb-1;i++){
			if (T[i]>T[i+1]){
				int temp = T[i];
				T[i] = T[i+1];
				T[i+1] = temp;
			}
		}
	}
}

void enregistrerDonnees(char nomFichier[], int T[],int nb){
	
	int i = 0;
	
	FILE * fichier = fopen(nomFichier,"w");
	
	if (fichier == NULL){
		printf("erreur lors de l'ouverture du fichier '%s' ",nomFichier);
		exit(1);
	}
	
	
	for(i=0;i<nb;i++){
		fprintf(fichier, "%d\n" , T[i]);
	}
	
	fclose(fichier);
	
}












