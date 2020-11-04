#include <stdio.h>

int main(){
	int i, j, menor, maior = 0, matriz[10][10];
	
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			printf("digite um numero para linha %d, coluna %d: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
			menor = matriz[0][0];
		}
	}
	
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			printf("%5d", matriz[i][j]);
			
			if(matriz[i][j] > maior){
				maior = matriz[i][j];
			}
			if(matriz[i][j] < menor){
				menor = matriz[i][j];
			}
		}
		printf("\n");
	}
	printf("\nMaior elemento: %d, menor elemento: %d.", maior, menor);
	
	
}
