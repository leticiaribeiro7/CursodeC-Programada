#include <stdio.h>

int main(){
	
	int num, qtd_par = 0, qtd_impar = 0, qtd_geral = 0;
	float media_par, media_impar, media_geral, soma_par = 0, soma_impar = 0, soma_geral = 0;
	
	printf("Digite um n�mero positivo: ");
	scanf("%d", &num);
	
	if(num != 0){
		soma_geral = soma_geral + num; 
		qtd_geral = qtd_geral + 1;
	}
	if(num % 2 == 0 && num != 0){
		qtd_par = qtd_par + 1;
		soma_par = soma_par + num;	
			
	}else if(num % 2 != 0){
		qtd_impar = qtd_impar + 1;
		soma_impar = soma_impar + num;
	}
	
	
	while(num > 0){
		printf("Digite um n�mero positivo: ");
		scanf("%d", &num);
		
		if(num != 0){
			soma_geral = soma_geral + num;
			qtd_geral = qtd_geral + 1;
		}
		if(num % 2 == 0 && num != 0){
			qtd_par = qtd_par + 1;
			soma_par = soma_par + num;	
			
		}else if(num % 2 != 0){
			qtd_impar = qtd_impar + 1;
			soma_impar = soma_impar + num;
		}
	}
	
	media_par = soma_par / qtd_par;
	printf("A m�dia dos n�meros pares � %.1f\n", media_par);
	
	media_impar = soma_impar / qtd_impar;
	printf("A m�dia dos n�meros �mpares � %.1f\n", media_impar);
	
	media_geral = soma_geral / qtd_geral;
	printf("A media de todos os n�meros digitados � %.1f", media_geral);
}


