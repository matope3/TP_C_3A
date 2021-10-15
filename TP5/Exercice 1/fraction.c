#include <stdio.h>
#include "fraction.h"

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

Fraction simpFraction (Fraction f){
	int div = PGCD(f.num,f.den);
	
	f.num/=div;
	f.den/=div;
	return (f);
	}

void addFraction (Fraction f1,Fraction f2){
	Fraction res, resSimp; 
	f1.num = f1.num * f2.den;
	f2.num = f2.num * f1.den;
	res.den = f1.den * f2.den;
	res.num = f1.num + f2.num;
	resSimp = simpFraction(res);
	
	printf("%d/%d\n", resSimp.num, resSimp.den);
	}
	
void subFraction (Fraction f1,Fraction f2){
	Fraction res, resSimp; 
	f1.num = f1.num * f2.den;
	f2.num = f2.num * f1.den;
	res.den = f1.den * f2.den;
	res.num = f1.num - f2.num;
	resSimp = simpFraction(res);
	
	printf("%d/%d\n", resSimp.num, resSimp.den);
	}

void mulFraction (Fraction f1,Fraction f2){
	Fraction res, resSimp; 
	res.num = f1.num * f2.num;
	res.den = f1.den * f2.den;
	resSimp = simpFraction(res);
	
	printf("%d/%d\n", resSimp.num, resSimp.den);
	}

void divFraction (Fraction f1,Fraction f2){
	int temp = f2.num;
	f2.num = f2.den;
	f2.den = temp;
	mulFraction (f1,f2);
	}