#include <stdio.h>

int main(){
	int i, v[200], a[200], b[200];
	
	/*foi preciso colocar os vetores A e B com tamanho 200 tambem
	por n�o saber quantos impares e pares o usuario vai digitar
	se fosse preciso printar na tela iria gerar lixo em algumas posi��es
	mas n�o encontrei outra forma*/
	
	for(i = 0; i<200; i++){
		printf("Digite um numero para salvar no vetor V: ");
		scanf("%d", &v[i]);
		
		if(v[i] % 2 == 0){
			a[i] = v[i];
		}
		else{
			b[i] = v[i];
		}

	}
		
}
