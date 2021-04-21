#include <stdio.h>
#include <math.h>

/*
	Определить, является ли заданное натуральное число квадратом другого числа.
*/

int main(){
	float n = 0;
	scanf("%f", &n);
	if(sqrt(n) - ((int) sqrt(n)) < 0.0001 ) printf("True\n");
	else printf("False\n");
	return 0;
}