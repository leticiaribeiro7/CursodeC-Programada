#include <stdio.h>

void main(){
	char frase[350]; int i = 0, j = 0;
	
	printf("Digite uma frase: ");
	gets(frase);
	
	for(i = 0; frase[i] != '\0'; i++){

		if(frase[i] == ' '){
			j++;
		}	
	}
	printf("A frase tem %d palavras", j+1);
}


