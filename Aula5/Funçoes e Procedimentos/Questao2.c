#include <stdio.h>

int divisivel(int, int);
int num1, num2;

int main(){
	if(divisivel(num1, num2) == 1){
		printf("Os n�meros s�o divis�veis.");
		return 1;
	}else{
		printf("Os n�meros n�o s�o divis�veis");
		return 0;
	}
	
}
	
int divisivel(int num1, int num2){
	printf("Digite um n�mero: ");
	scanf("%d", &num1);
	printf("Digite outro n�mero: ");
	scanf("%d", &num2);
	
	if(num1 % num2 == 0){
		return 1;
	}else{
		return 0;
	}
}

