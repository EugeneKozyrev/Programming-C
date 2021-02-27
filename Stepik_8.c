#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int ab = 0;
	int bc = 0;
	int ca = 0;
	scanf("%d %d %d", &ab, &bc, &ca);
	if((ab + bc) < ca || (ab + ca) < bc || (ca + bc) < ab ){
		printf("не является треугольником");
	}
	else if(ab == bc && ab == ca){
		printf("равносторонний");
	}
	else if(ab == bc && ab != ca || ab == ca && ab != bc || bc == ca && bc != ab){
		printf("равнобедренный");
	}
	else if(pow(ab, 2) == pow(bc, 2) + pow(ca, 2) || pow(bc, 2) == pow(ab, 2) + pow(ca, 2) || pow(ca, 2) == pow(bc, 2) + pow(ab, 2)){
		printf("прямоугольный");
	}
	else {
		printf("произвольный");
	}
	
    return 0;
}