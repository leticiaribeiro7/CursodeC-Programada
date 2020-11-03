#include <stdio.h>

int main(){
	
	int fluencia, idade;
	float altura;
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	
	printf("Você é fluente em quantos idiomas?: ");
	scanf("%d", &fluencia);
	
	if(idade >= 24 && altura >= 1.70 && fluencia >= 2){
		printf("Você atende aos requisitos do cargo de aeromoça!");	
	}else{
		printf("Você não atende aos requisitos do cargo de aeromoça.");
	}
}
