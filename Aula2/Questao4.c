#include <stdio.h>

int main(){
	
	int fluencia, idade;
	float altura;
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	
	printf("Voc� � fluente em quantos idiomas?: ");
	scanf("%d", &fluencia);
	
	if(idade >= 24 && altura >= 1.70 && fluencia >= 2){
		printf("Voc� atende aos requisitos do cargo de aeromo�a!");	
	}else{
		printf("Voc� n�o atende aos requisitos do cargo de aeromo�a.");
	}
}
