#include <stdio.h>

void criar_matriz();
int matriz[3][3], num, i, j;

void criar_matriz(){
	printf("Digite um numero para multiplicar a matriz: ");
	scanf("%d", &num);
	
	for(i = 0; i<3; i++){
		for(j = 0; j<3; j++){
			printf("Digite um numero para linha %d coluna %d: ", i, j);
			scanf("%d", &matriz[i][j]);	
			matriz[i][j] = matriz[i][j] * num;
		}
	}
}
	
void main(){
	criar_matriz();
	for(i = 0; i<3; i++){
		for(j = 0; j<3; j++){
			printf("%5d", matriz[i][j]);
		}
		printf("\n");
	}
	
}
