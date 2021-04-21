#include <stdio.h>
#include <stdlib.h>

/*
	Треугольное число — один из типов фигурных чисел, определяемый как число точек, которые могут быть расставлены в форме правильного треугольника.
	
*/

int sumDigit(int a){
	if(a <= 0) 
		return 0;
	else 
		return a % 10 + sumDigit(a / 10);

}

int triangle(int a){
	int result = 0;
	if(a == 1)
		result += 1;
	else{
		result += a + triangle(a - 1);
	}

	return result;
}

void printPyramid(int a){
	int i = 1;
	while(i <= a){
		int amount = i;
		char shift[5];
		sprintf(shift, "%%%dd", a + 1 - i);
		printf(shift, i);
		while(--amount != 0)
			printf("%2d", i);
		printf("\n");
		i++;
	}
}

void printTriangle(int a){
	int p = 0;
	while(a > 0){
		p++;
		a -= p;
		printf("%s%d", (p > 1) ? " + " : "", p);
	}
}

int main(int argc, char const *argv[]){
	const int a = 9;
	printf("%5d\n", triangle(a));
	printPyramid(a);
	printTriangle(triangle(a));
	printf("\n");
	return 0;
}