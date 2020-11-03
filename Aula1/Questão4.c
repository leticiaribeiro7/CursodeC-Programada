#include <stdio.h>

int main(){
int gotas;
float peso;

printf("Qual o peso da criança em kg? ");
scanf("%f", &peso);

gotas = peso / 0.4;
printf("A criança deve tomar %i gotas do remédio.", gotas);

}
