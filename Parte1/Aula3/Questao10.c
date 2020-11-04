#include <stdio.h>

int main(){
	char frase; int i = 0, j = 0;
	
	printf("Digite algo: ");
	frase = getchar();
	
	for(i; frase != '\n'; i++){
		frase = getchar();
	}
	for(j; j<i; j++){
		printf("*");
	}
	
}
