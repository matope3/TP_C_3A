#include <stdio.h>
#include "polynome.h"

void creerPoly(Polynome p){
	
	int nTermes, i, coeff;
	
	printf("Nombre de termes : ");
	scanf("%d",&nTermes);
	
	nTermes>NBMAX?printf("Impossible, trop de termes\n"),exit(1):0;
	
	for (i=0;i<nTermes;i++){
		printf("degre et coeff du terme numero %d (classe par degre decroissants) (n,x) : ",i+1);
		scanf("%d,%f",&p[i].degre,&p[i].coeff);
		}
	p[nTermes].degre  = -1;
	}

	
void affPoly(Polynome p){
	
	int i = 0;
	
	printf("Le polynome est : "); 
	
	while (p[i].degre != -1 && i<NBMAX){
		printf("%4.2fx^%d ", p[i].coeff, p[i].degre);
		i++;
		
		p[i].degre!=-1?printf("+ "):printf("\n");
		}
	}

	
	
void addPolynomes (Polynome p1, Polynome p2, Polynome res){
	int i = 0;
	int j = 0;
	int k = 0;
	while (p1[i].degre != -1){
		do{
			
			if (p2[j].degre>p1[i+1].degre) {
				res[k] = p2[j];
				k++;
				perror(">");
			} else if (p1[i].degre == p2[j].degre) {
				res[k].degre = p1[i].degre;
				res[k].coeff = p1[i].coeff + p2[j].coeff;	
				k++;
				perror("=");
			}
			perror("j++");
			j++;
			}while (p1[i].degre != p2[j-1].degre && p2[j].degre != -1);
		perror("i++");
		i++;	
		}
	res[k].degre = -1;
		
	}