/* Exercice 1 */

#include <stdio.h>

int main(){

	char note;
	printf("Entrez votre note : ");
	scanf("%c",&note);
	

	/* Version if imbriqués */
	printf(" Version if imbriqués :\n");
	
	if (note == 'A'){
		printf("Très bien");
	} else if (note == 'B'){
		printf("Bien");
	} else if (note == 'C'){
		printf("Assez bien");
	} else if (note == 'D'){
		printf("Passable");
	} else if (note == 'E'){
		printf("Inssufisant");
	}
	
	/* Version if en séquence */
	printf("\n Version if en séquence :\n");
	
	if (note == 'A'){
		printf("Très bien");
	}
	if (note == 'B'){
		printf("Bien");
	}
	if (note == 'C'){
		printf("Assez bien");
	}
	if (note == 'D'){
		printf("Passable");
	}
	if (note == 'E'){
		printf("Inssufisant");
	}
	
	/* Version switch */
	printf("\n Version switch :\n");
	
	switch(note){
		case 'A': printf("Très bien"); break;
		case 'B': printf("Bien"); break;
		case 'C': printf("Assez bien"); break;
		case 'D': printf("Passable"); break;
		case 'E': printf("Inssufisant"); break;
	}

	printf("\n");
	return(0);
}

/* Il ne se passe rien quand l'utilisateur entre une autre lettre que A à E. (il y aura des trous) */

