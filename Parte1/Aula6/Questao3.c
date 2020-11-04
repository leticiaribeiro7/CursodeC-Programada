#include <stdio.h>
#include <stdlib.h>

int i, n, *v, soma = 0;
float media;

void vetor();

void main(){
	printf("Digite quantos elementos o vetor terá: ");
	scanf("%d", &n);
	v = (int*) malloc (n*sizeof(int));
	vetor();
	printf("Soma: %d, Media: %.1f", soma, media);
}

void vetor(){
	for(i = 0; i < n; i++){
		printf("Digite um numero inteiro positivo: ");
		scanf("%d", &v[i]);
		soma = soma + v[i];
	}
	media = (float) soma / n;
}
