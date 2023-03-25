/*Escrever um programa que calcule e escreva cinco inteiros positivos e consecutivos cuja soma dos quadrados seja igual a 2010. (Resposta: 18,..,22)*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
	
	
	int a,b,c,d,e,soma;
	
	a = 1;
	b = 2;
	c = 3;
	d = 4;
	e = 5;
		
	do
	{soma = (++a*a)+(++b*b)+(++c*c)+(++d*d)+(++e*e);	
	
	}while(soma!=2010);  
	

	printf("%d %d %d %d %d",a,b,c,d,e);

	
	   
}
