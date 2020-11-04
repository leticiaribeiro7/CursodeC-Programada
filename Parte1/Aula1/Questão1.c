#include <stdio.h>
#include <math.h>

int main(){
    float altura, peso, potencia_altura, imc;

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    potencia_altura = pow(altura, 2);
    imc = peso / potencia_altura;
    printf("Seu imc é %f", imc);
}
