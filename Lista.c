#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct lista{
	int numero_matricula;
	char nome[80];
	float media;
	struct lista * next;
};
typedef struct lista Lista;

Lista * inicializaLista(){
	return NULL;
}

bool vazia(Lista * pL){
	if(pL->numero_matricula == NULL)
		return true;
	else
		return false;
}


Lista * inserirComeco(Lista * pL, int elemento1, char elemento2[80], float elemento3){
	Lista * novo;
	novo = (Lista *) malloc(sizeof(Lista));
	if(novo != NULL){
		novo->numero_matricula = elemento1;
		novo->nome [80]= elemento2;
		novo->media = elemento3;
		novo->next = pL;
		printf("Lista[%d] ", novo->numero_matricula);
		return novo;
	}
}

void imprimir(Lista * pL){
	//printf("\nLista Completa: \n");
	while(pL != NULL){
		printf("\n\n");
		printf("%d -> ", pL->numero_matricula);
		printf("%c -> ", pL->nome);
		printf("%.2f -> ", pL->media);
		printf("\n\n");
		pL = pL->next;	
	}
}
/*
Lista * buscar(Lista * pL, int valor){
	while(pL != NULL){
		if(pL->info == valor)
			return pL;
		pL = pL->next;
	}
	return NULL;
}

Lista * remover(Lista * pL, int valor){
	Lista * ant = NULL;
	Lista * p = pL;

	while(p != NULL && p->info != valor){
		ant = p;
		p = p->next;
	}

	if(p == NULL) // que nao existe na lista o dado
		return pL;
	else
		if(ant == NULL) //é o primeiro da lista a ser removido
			pL = p->next;
		else{
			ant->next = p->next; // qualquer outro da lista a ser removido
		}

		free(p);
		return pL;
}




Lista* separa (Lista* pL, int n){
		Lista * nova=NULL;
		while(pL != NULL){
		if(pL->info == n){
		
		nova=pL->next;
		pL->next=NULL;
		return nova;
	}
		pL = pL->next;
	}
	return NULL;
}
*/	
int main(){

	Lista * L;
	Lista * Q;
	Lista * S;

	L = inicializaLista();

	if(vazia(&L))
		printf("Lista Vazia! \n");
	else
		printf("Lista com elementos! \n");

	L = inserirComeco(L,1,"Joao", 10);
	L = inserirComeco(L,2,"Lucas", 8);
	L = inserirComeco(L,3,"Jorge", 9);

	imprimir(L);
/*
	Q = buscar(L,10);
	if(Q != NULL)
		printf("Elemento %d contido na lista! \n", Q->info);
	else
		printf("Elemento nao encontrado! \n");

	L = remover(L,5);
	imprimir(L);
	
	S = separa(L,150);
	printf("\n\nSeparados:");
	
	printf("\n\nLista 1:");
	imprimir(L);
	printf("\n\nLista 2:");
	imprimir(S);
*/
	return 0;
}
