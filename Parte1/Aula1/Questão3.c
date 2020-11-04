#include <stdio.h>

int main(){

float produto, desconto, valor_produto, valor_desconto;

printf("Digite o valor do produto: ");
scanf("%f", &produto);

printf("Digite a porcentagem do desconto: ");
scanf("%f", &desconto);


valor_desconto = (produto * (desconto/100));
valor_produto = produto - valor_desconto;

printf("O valor do desconto foi R$%.2f e você vai pagar R$%.2f.", valor_desconto, valor_produto);

}
