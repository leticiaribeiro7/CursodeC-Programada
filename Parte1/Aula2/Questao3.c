#include <stdio.h>

int main(){
	
	int idade;
	float peso;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	if (idade >= 18 && idade <= 65 && peso >= 50){
		printf("Voc� pode doar sangue!");		
	}else{
		printf("Voc� n�o pode doar sangue.");
	}
	
	
}
