#include <stdio.h>

int factorielle(int n){
	int p = 1;
	int i;
	for(i=0;i<n;i++){
		p *= (i+1);
	}
	return p;
}

int factoriellebis(int m){
	int p = 1;
	int n = 1;
	while(p<m){
		n++;
		p *= (n+1);
	}
	return n;
}


int main(){
	int n;
	printf("Entrez un nombre : ");
	scanf("%d",&n);
	printf("Factorielle : %d \nFactorielleBis : %d \n",factorielle(n),factoriellebis(n));
	return(0);
}

/* Pour des grandes valeur de n, factorielle affiche 0 : il y a surrement un dépassement de capacité
Pour des valeurs comme 5 ou 8 ça marche dans les deux sens */
