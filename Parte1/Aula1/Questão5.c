#include <stdio.h>

int main (){
	
	int dias_vividos, anos, dias_restantes, dias_para_mes, dias_finais;
	
	printf("Voc� j� viveu quantos dias?: ");
	scanf("%i", &dias_vividos);
	anos = dias_vividos / 365;
	dias_restantes = dias_vividos % 365;
	dias_para_mes = dias_restantes / 30;
	dias_finais = dias_restantes % 30;
	printf("Isso significa que voc� tem %i anos, %i m�s(es) e %i dias.", anos, dias_para_mes, dias_finais);
	
}
