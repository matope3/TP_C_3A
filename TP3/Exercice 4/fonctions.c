#include <stdio.h>
#include <math.h>

void initMatrice(int mat[2][3],int n,int m){
	int i,j;
	printf("Entrez les valeurs de la matrice (%d,%d)\n",n,m);
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			printf("ligne %d col %d : ", i, j);
			scanf("%d",&mat[i][j]);
		}
	}
}

void afficherMatrice(int mat[2][3],int n,int m){
	int i,j;
	printf("Affichage de la matrice (%d,%d)\n",n,m);
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			printf("%d", mat[i][j]);
			printf("\t");
		}
		printf("\n");
	}
}

void afficherMatriceT(int mat[3][2],int n,int m){
	int i,j;
	printf("Affichage de la matrice (%d,%d)\n",m,n);
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			printf("%d", mat[i][j]);
			printf("\t");
		}
		printf("\n");
	}
}

void afficherMatriceC(int mat[2][2],int n,int m){
	int i,j;
	printf("Affichage de la matrice (%d,%d)\n",m,n);
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			printf("%d", mat[i][j]);
			printf("\t");
		}
		printf("\n");
	}
}

void additionnerMatrices(int mat1[2][3],int mat2[2][3],int n,int m,int matR[2][3]){
	int i,j;
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			matR[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
}


void transposee(int mat[2][3],int n,int m, int matR[3][2]){
	int i,j;
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			matR[j][i] = mat[i][j];
		}
	}
}

void produitMat(int mat1[2][3],int mat2[3][2],int n,int m, int matR[2][2]){
	int i,j,k;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			matR[i][j] = 0;
			for (k=0;k<m;k++){
				matR[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}
}














