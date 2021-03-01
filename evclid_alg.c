#include <stdio.h>
#include <stdlib.h>

/*
    Алгоритм Евклида — эффективный алгоритм для нахождения наибольшего общего делителя двух целых чисел. 

    Функции: int evclid(int a, int b) и int evclidFast(int a, int b), вычисляют НОД двух целых чисел. 
    Первая посредством вычитания и имеет сложность О(n), вторая посредством деления и имеет сложность O(log(n)).

    Функция int evclidExter(int a, int b, int *x, int *y) имеет довольно сложный алгоритм, но также вычисляет НОД двух целых чисел. 
*/

int evclid(int a, int b){
	while(a != b){
		if(a > b){
			a = a - b;
		}else{
			b = b - a;
		}
	}
	return a;
}

int evclidFast(int a, int b){
	while(b != 0){
		int t = a % b;
		a = b;
		b = t;
	}
	return a;
}

int evclidExter(int a, int b, int *x, int *y){
	int q, r, x1, y1, x2, y2;
	if(b == 0){
		*x = 1;
		*y = 0;
		return a;	
	}
	x1 = 0;
	x2 = 1;
	y1 = 1;
	y2 = 0;

	while(b > 0){
		q = a / b;
		r = a - q * b;
		*x = x2 - q * x1;
		*y = y2 - q * y1;
		a = b;
		b = r;
		x2 = x1;
		x1 = *x;
		y2 = y1;
		y1 = *y;	
	}
	*x = x2;
	*y = y2;
	return a;
}

int main(int argc, char const *argv[])
{
	const int a = 20;
	const int b = 35;
	int k1, k2;
	printf("НОД чисел %d и %d равен: %d\n", a, b, evclid(a, b));
	printf("НОД чисел %d и %d равен: %d\n", a, b, evclidFast(a, b));
	printf("НОД чисел %d и %d равен: %d\n", a, b, evclidExter(a, b, &k1, &k2));
	return 0;
}