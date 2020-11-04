#include <stdio.h>

int main(){
	
	int idade;
	float peso;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	if (idade >= 18 && idade <= 65 && peso >= 50){
		printf("Você pode doar sangue!");		
	}else{
		printf("Você não pode doar sangue.");
	}
	
	
}
