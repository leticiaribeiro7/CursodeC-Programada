#include <stdio.h>

int main(){
	float peso;
	int embalagem, dias;
	
	printf("Quantos kg pesa o cachorro?: ");
	scanf("%f", &peso);
	
	printf("Quantos kg tem a embalagem de ração?: ");
	scanf("%d", &embalagem);
	
	if(peso <= 5){
		dias = (embalagem*1000) / 60;
		printf("A ração vai durar %d dias.", dias);
		
	}else if(peso >= 6 && peso <= 10){
		dias = (embalagem*1000) / 95;
		printf("A ração vai durar %d dias.", dias);
		
	}else if(peso >= 11 && peso <=15){
		dias = (embalagem*1000) / 135;
		printf("A ração vai durar %d dias.", dias);
		
	}else if(peso >= 16 && peso <= 20){
		dias = (embalagem*1000) / 170;
		printf("A ração vai durar %d dias.", dias);
	
	}else if(peso >= 21){
		dias = (embalagem*1000) / 215;
		printf("A ração vai durar %d dias.", dias);
}


}
