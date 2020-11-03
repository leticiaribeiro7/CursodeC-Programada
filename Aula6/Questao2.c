#include <stdio.h>
#include <stdlib.h>
#define MAX 2000

int i, j;
void calculo_cliente();
float media, porc, menor_saldo, maior_saldo, soma;
int maior_agencia, menor_agencia, maior_conta, menor_conta;

struct clientes{
	int conta;
	int agencia;
	float saldo;
};

struct clientes c[MAX];

main(){
	
	for(i = 0; i<MAX; i++){
		printf("Agencia: ");
		scanf("%d", &c[i].agencia);
		printf("Conta: ");
		scanf("%d", &c[i].conta);
		printf("Saldo: ");
		scanf("%f", &c[i].saldo);
		soma = soma + c[i].saldo;
	}
	
	calculo_cliente();
	printf("Menor Saldo: Agencia %d e Conta %d\n", menor_agencia, menor_conta);
	printf("Maior Saldo: Agencia %d e Conta %d\n", maior_agencia, maior_conta);
	printf("Média dos saldos: %.2f\n", media);
	printf("Porcentagem de saldos menores que R$1000: %.1f%", porc);

}

void calculo_cliente(){
	
	menor_saldo = c[0].saldo;
	
	for(i = 1; i<MAX; i++){
		if(c[i].saldo < menor_saldo){
			menor_saldo = c[i].saldo;
			menor_agencia = c[i].agencia;
			menor_conta = c[i].conta;
		}
		if(menor_saldo == c[0].saldo){
			menor_agencia = c[0].agencia;
			menor_conta = c[0].conta;
		}
		
	
	}
	
	for(i = 0; i<MAX; i++){
	
		if(c[i].saldo < 1000){
			j++;
		}
	
		if(c[i].saldo > maior_saldo){
			maior_saldo = c[i].saldo;
			maior_agencia = c[i].agencia;
			maior_conta = c[i].conta;
		}
	}
	media = (float) soma / MAX;
	porc = (j*100) / MAX;
	
}


