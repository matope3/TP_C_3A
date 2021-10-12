#include <stdio.h>

int PGCD(int a,int b){
	int p;
	do {
		if (a>b && a-b!=0){
			p=a-b;
			a=b;
			b=p;
		} else if (b>a && b-a!=0) {
			p=b-a;
			b=a;
			a=p;
		}
	} while(a!=b);
	
	return(p);
}

int main(){
	int a,b;
	printf("Entrez deux nombres (a,b) : ");
	scanf("%d,%d",&a,&b);
	printf("Le PGDC de %d et %d est %d \n",a,b,PGCD(a,b));
	return (0);
}
