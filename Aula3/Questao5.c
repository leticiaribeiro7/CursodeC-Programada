#include <stdio.h>

int main(){
	int matriz[4][4], num, i, j;
	
	for(i = 0; i<4; i++){
		for(j = 0; j<4; j++){
			printf("Digite um numero para linha %d coluna %d: ", i, j);
			scanf("%d", &matriz[i][j]);	
		}
	}
	printf("Digite um numero para multiplicar a matriz: ");
	scanf("%d", &num);
	
	for(i = 0; i<4; i++){
		for(j = 0; j<4; j++){
			printf("%5d", matriz[i][j] * num);
		}
		printf("\n");
	}
	
}
