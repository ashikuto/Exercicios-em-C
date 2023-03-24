/*Escrever um programa que calcule e imprima todos os números entre 1 e 30 que possuam a seguinte característica:8^3=512 e 5+1+2=8. 
(Resposta: 1, 8, 17, 18, 26, 27).
*/


#include <stdio.h>
#include <math.h>

int main() {

	int n=1,i=3,p,a,b,c,d,e,a1,a2,a3,a4,a5=0;

	do{
	p= pow(n,i);
if(p!=0)
	a1 = p%10;a = p/10;p/=10;
 	a2 = p%10;b = p/10;p/=10;		
	a3 = p%10;c = p/10;p /=10;
	a4 = p%10;d = p/10;p /=10;
	a5 = p%10;e = p/10;p /=10;
	if ((a1+a2+a3+a4+a5)==n){
	printf("Possue a mesma caracteristica: %i\n",n);
}
		n++;  
	}while(n!=30);

}
