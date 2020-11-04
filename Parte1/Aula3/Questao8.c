#include <stdio.h>

int main(){
	char frase; int i = 0;

	printf("Digite algo: ");
	frase = getchar();
	
	for(i; frase != '\n'; i++){
		frase = getchar();
		if(frase == ' '){
			i--;
		}		
	}
	
	printf("A frase digitada tem %d caracteres.", i);
}
