#include <stdio.h>

int main(){
	float matriz[50][5], media = 0, soma = 0, maior = 0;
	int i,j, alunos;
	
	for(i = 0; i<50; i++){
		for(j = 0; j<5; j++){
			printf("Digite a %dª nota do %dº aluno: ", j+1, i+1);
			scanf("%f", &matriz[i][j]);
			soma = soma + matriz[i][j];	
		}
		media = soma / 5;
		printf("A média do %dº aluno é %.1f\n", i+1, media);
		if(media > maior){
			maior = media;
		}
		if(media >= 7){
			alunos ++;
		}
		media = 0; soma = 0;
	}
	printf("A maior média foi %.1f.\n", maior);
	printf("%d aluno(s) tiveram média maior ou igual a 7.", alunos);
	
	
}
