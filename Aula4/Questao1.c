#include <stdio.h>
void main() {
	int y, *p;
	int v[5]={2,7,1,4,5};
	
	p = v;
	y = *p;
	p = p + y;
	
	printf("%d \n", *p); //printa o n�mero 1
	
	(*p)++;
	y--;
	(*p) = (*p) + y;
	
	printf("%d \n", *p); //printa o n�mero 3
}
