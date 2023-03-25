/* Escrever um programa que calcule e imprima quais são os cinco números inteiros e ímpares e consecutivos que somados resultem no número 565. (Resposta: 109,..117)
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
	
	
	int a,b,c,d,e,soma;
	
	a = 0;b = 2;c = 4;d = 6;e = 8;
	
	
	
	
	do
	{soma = (++a)+(++b)+(++c)+(++d)+(++e);	
	
	}while(soma!=565);  
	

	printf("%d %d %d %d %d",a,b,c,d,e);

	
	   
}
