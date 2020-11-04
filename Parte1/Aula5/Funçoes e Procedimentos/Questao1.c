#include <stdio.h>

float fahrenheit, celsius;
void conversao();


void main(){
	printf("Digite uma temperatura em escala fahrenheit: ");
	scanf("%f", &fahrenheit);
	conversao();
}

void conversao(){
	celsius = (fahrenheit - 32) * 5/9;
	printf("Temperatura convertida para celsius: %.1f", celsius);
}
