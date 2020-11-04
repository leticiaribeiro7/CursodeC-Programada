#include <stdio.h>

int main(){
	
	int placa, ultimo_digito;
	
	printf("Digite os útlimos 4 digitos da placa do seu carro: ");
	scanf("%d", &placa);
	
	ultimo_digito = placa % 10;
	
	if(ultimo_digito == 1 || ultimo_digito == 2){
		printf("Você não pode trafegar com o carro dia de segunda-feira.");
		
	}else if(ultimo_digito == 3 || ultimo_digito == 4){
		printf("Você não pode trafegar com o carro dia de terça-feira.");
		
	}else if(ultimo_digito == 5 || ultimo_digito == 6){
		printf("Você não pode trafegar com o carro dia de quarta-feira.");
		
	}else if(ultimo_digito == 7 || ultimo_digito == 8){
		printf("Você não pode trafegar com o carro dia de quinta-feira.");
		
	}else if(ultimo_digito == 9 || ultimo_digito == 0){
		printf("Você não pode trafegar com o carro dia de sexta-feira.");
	}
	
}
