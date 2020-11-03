#include <stdio.h>

int divisivel(int, int);
int num1, num2;

int main(){
	if(divisivel(num1, num2) == 1){
		printf("Os números são divisíveis.");
		return 1;
	}else{
		printf("Os números não são divisíveis");
		return 0;
	}
	
}
	
int divisivel(int num1, int num2){
	printf("Digite um número: ");
	scanf("%d", &num1);
	printf("Digite outro número: ");
	scanf("%d", &num2);
	
	if(num1 % num2 == 0){
		return 1;
	}else{
		return 0;
	}
}

