#include <stdio.h>
#include <stdlib.h>

void initMatrice(int mat[2][3],int n,int m);

void afficherMatrice(int mat[2][3],int n,int m);

void afficherMatriceT(int mat[3][2],int n,int m);

void afficherMatriceC(int mat[2][2],int n,int m);

void additionnerMatrices(int mat1[2][3],int mat2[2][3],int n,int m,int matR[2][3]);

void transposee(int mat[2][3],int n,int m, int matR[3][2]);

void produitMat(int mat1[2][3],int mat2[3][2],int n,int m, int matR[2][2]);
