#include <stdio.h>
#include <string.h>

int main(){
	char fonte[7], destino[7];
	int i = 7;
	
	printf("Digite algo: ");
	gets(fonte);
	printf("%s\n", fonte); //lendo a string com mais de um caractere
	
	strcpy(destino, fonte);
	
	for(i; i>=0; i--){
		printf("%c", destino[i]); //lendo um caractere por vez
}
	
}


