#include <stdio.h>

int main(){
	
	int c = 0, qtd = 0;
	float nota, media, soma = 0;
	
	printf("Cálculo de médias - para finalizar digite um número menor que 0 ou maior que 10.\n\n");
	printf("Digite uma nota: ");
	scanf("%f", &nota);
	
	if(nota>=7 && nota <=10){
		c = c + 1;
	}
	
	do {
		soma = soma + nota;
		printf("Digite uma nota: ");
		scanf("%f", &nota);
		qtd = qtd + 1;
		
		if(nota>=7 && nota <=10){
			c = c + 1;
		}
	}while(nota>=0 && nota<=10);
	
	media = (float)soma / qtd;
	printf("A média das notas digitadas é %.2f\n", media);
	printf("Foram digitadas %d notas maiores ou iguais a 7.", c);	
}
	
