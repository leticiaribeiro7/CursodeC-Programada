#include <stdio.h>

int main(){
	int vetor[4], num, i, j, indice;
	
	for(i = 0; i<4; i++){
		printf("Digite um numero para posi��o %d: ", i);
		scanf("%d", &vetor[i]);
	}
	
	printf("Qual numero deseja saber se est� no vetor?: ");
	scanf("%d", &num);
	
	for(i = 0; i<4; i++){
		if(vetor[i] == num){
			j == i;
		}
	}
		if(j == i){
			printf("Numero encontrado. Posi��o %d", j);
		}
		else if(j =! i){
			printf("N�mero n�o encontrado.");
		}
}

