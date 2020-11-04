#include <stdio.h>

int main(){
	int i, a[5], b[5], c[10];
	
	for(i = 0; i<5; i++){
		printf("Digite um numero para vetor A: ");
		scanf("%d", &a[i]);
	}
		
	for(i = 0; i<5; i++){
		printf("Digite um numero para vetor B: ");
		scanf("%d", &b[i]);	
	}
	
	printf("Vetor C: ");
	for(i = 0; i<5; i++){
		c[i] = a[i] + b[i];
		printf("%d ", c[i]);
	}
	
}
