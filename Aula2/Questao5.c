#include <stdio.h>

int main(){
	
	float salario, parcela, valor_maximo = 0;
	
	printf("Digite o seu salário: ");
	scanf("%f", &salario);
	
	printf("Qual o valor da prestação?: ");
	scanf("%f", &parcela);
	
	valor_maximo = salario * 30/100;
	
	if(valor_maximo >= parcela){
		printf("O empréstimo pode ser concedido.");
		
	}if(valor_maximo < parcela){
		printf("O empréstimo não pode ser concedido.");
	}
}
