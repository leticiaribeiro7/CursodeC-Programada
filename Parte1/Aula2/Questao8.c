#include <stdio.h>

int main (){
	float area, pi = 3.14;
	int raio;
	
	
	do {
	
		printf("Digite o raio do c�rculo: ");
		scanf("%d", &raio);
		
		area = pi * raio * raio;
		printf("A �rea do c�rculo � %.2f.\n", area);
		
	}while(raio > 0);
}
