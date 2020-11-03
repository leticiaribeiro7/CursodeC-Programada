#include <stdio.h>

int main (){
	float area, pi = 3.14;
	int raio;
	
	
	do {
	
		printf("Digite o raio do círculo: ");
		scanf("%d", &raio);
		
		area = pi * raio * raio;
		printf("A área do círculo é %.2f.\n", area);
		
	}while(raio > 0);
}
