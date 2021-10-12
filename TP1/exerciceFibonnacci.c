#include <stdio.h>


int Fibonnacci(int n){

	int U[3];
	int i=2;
	
	U[0] = 0;
	U[1] = 1;
	
	switch(n){
		case 0: U[2]=0; break;
		case 1: U[2]=1; break;
	}
	while (i<=n){
		U[2]=U[0]+U[1];
		U[0]=U[1];
		U[1]=U[2];
		i++;
	}
	return U[2];
}

int main(){
	int n;
	printf("Entrez un nombre : ");
	scanf("%d",&n);
	printf("Le résultat est : %d \n",Fibonnacci(n));
	return (0);
}

/* Il faut tester 0,1 pour verifier le switch et ensuite des valeurs consécutives pour vérifier que la suite marche bien. */
