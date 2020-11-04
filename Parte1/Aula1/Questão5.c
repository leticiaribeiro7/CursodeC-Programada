#include <stdio.h>

int main (){
	
	int dias_vividos, anos, dias_restantes, dias_para_mes, dias_finais;
	
	printf("Você já viveu quantos dias?: ");
	scanf("%i", &dias_vividos);
	anos = dias_vividos / 365;
	dias_restantes = dias_vividos % 365;
	dias_para_mes = dias_restantes / 30;
	dias_finais = dias_restantes % 30;
	printf("Isso significa que você tem %i anos, %i mês(es) e %i dias.", anos, dias_para_mes, dias_finais);
	
}
