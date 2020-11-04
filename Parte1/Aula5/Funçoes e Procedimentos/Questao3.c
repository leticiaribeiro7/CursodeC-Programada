#include <stdio.h>

int num1, num2, diferenca, soma, produto;
void calculos();


void calculos(){
	soma = num1 + num2;
	diferenca = num1 - num2;
	produto = num1 * num2;
}


void main(){
	printf("Digite um numero: ");
	scanf("%d", &num1);
	printf("Digite outro numero: ");
	scanf("%d", &num2);
	
	calculos();
	printf("soma = %d \ndiferenca = %d \nproduto = %d", soma, diferenca, produto);
}
