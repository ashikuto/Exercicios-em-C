/*Quais são os números inteiros entre 10 e 1000 iguais ao dobro do produto de seus algarismos?
Por exemplo, onúmero 36. Seus algarismos são 3 e 6 e o produto entre eles é 18.
Portanto, o dobro de 18 é igual a 36, ou seja, opróprio número.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int a,b,z,z2;
	int i;

for (i=10; i<1000; i++){
	
	a= i/10;
	b= i%10;	
	z=a*b;
	z2=z*2;
	if(i==z2 ){
	
	printf("Números inteiros entre 10 e 1000 iguais ao dobro do produto de seus algarismos: \n (%i) |%i|*|%i|=%i, |%i|*2= %i; ",i,a,b,z,z,z2);

}
}
}
