#include <stdio.h>

int main(){
	
	float salario, parcela, valor_maximo = 0;
	
	printf("Digite o seu sal�rio: ");
	scanf("%f", &salario);
	
	printf("Qual o valor da presta��o?: ");
	scanf("%f", &parcela);
	
	valor_maximo = salario * 30/100;
	
	if(valor_maximo >= parcela){
		printf("O empr�stimo pode ser concedido.");
		
	}if(valor_maximo < parcela){
		printf("O empr�stimo n�o pode ser concedido.");
	}
}
