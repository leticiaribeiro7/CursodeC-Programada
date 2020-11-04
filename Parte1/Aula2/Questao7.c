#include <stdio.h>

int main(){
	
	int voto, geral = 0, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	float por_a, por_b, por_c, por_d;
	
	while(geral < 2000){
		
 		geral++;
		
		printf("Escolha um candidato\n");
		printf("[1] Candidato A\n");
		printf("[2] Candidato B\n");
		printf("[3] Candidato C\n");
		printf("[4] Candidato D\n");
		printf("[5] Voto em Branco --> ");
		scanf("%d", &voto);
	
 		
 		switch(voto){
	
			case 1:
				a++;
				printf("Você votou no candidato A.\n\n");
				break;
			case 2:
				b++;
				printf("Você votou no candidato B.\n\n");
				break;
			case 3:
				c++;
				printf("Você votou no candidato C.\n\n");
				break;
			case 4:
				d++;
				printf("Você votou no candidato D.\n\n");
				break;
			case 5:
				e++;
				printf("Você votou em branco.\n\n");
				break;
			default:
				f++;
				printf("Você votou nulo.\n\n");
				break;
	}

		}
	printf("%d", geral);
	
	por_a = (a*100) / geral;
	por_b = (b*100) / geral;
	por_c = (c*100) / geral;
	por_d = (d*100) / geral;
	
	printf("O candidato A teve %.1f porcento dos votos.\n", por_a);
	printf("O candidato B teve %.1f porcento dos votos.\n", por_b);
	printf("O candidato C teve %.1f porcento dos votos.\n", por_c);
	printf("O candidato D teve %.1f porcento dos votos. \n", por_d);
	printf("Total de votos nulos: %d. \n", f);
	printf("Total de votos em branco: %d. \n", e);
	
	
	
}
