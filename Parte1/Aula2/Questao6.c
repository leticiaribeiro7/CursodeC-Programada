#include <stdio.h>

int main(){
	
	int numero, mult, contador;
	
	printf("Digite o número que deseja saber a tabuada: ");
	scanf("%d", &numero);
	
	for(contador = 1; contador <= 10; contador++){
		mult = contador * numero;
		printf("%d x %d = %d\n", contador, numero, mult);
		
	}
}
