#include <stdio.h>

int main(){
int gotas;
float peso;

printf("Qual o peso da crian�a em kg? ");
scanf("%f", &peso);

gotas = peso / 0.4;
printf("A crian�a deve tomar %i gotas do rem�dio.", gotas);

}
