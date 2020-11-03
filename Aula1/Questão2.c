#include <stdio.h>

int main(){

	float distancia, valor1, valor2, agencia1, agencia2;

	printf("Quantidade de quilômetros a serem rodados: ");
	scanf("%f", &distancia);

	valor1 = distancia * 1.40;
	valor2 = distancia * 1.20;
	
	agencia1 = 62 + valor1;
	agencia2 = 80 + valor2;

printf("Primeira agência: R$%.2f\nSegunda agência: R$%.2f", agencia1, agencia2);
}
