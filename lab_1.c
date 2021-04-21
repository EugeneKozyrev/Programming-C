#include <stdio.h>
#include <math.h>

/*
	Функция sin_by_n вычисляет частичную сумму ряда по количеству шагов n(
	кол-во шагов = кол-ву слагаемых в сумме)
*/

float sin_by_n(float x, int n){
	float result = 0;
	for (int i = 0; i < n; i++){
		result += pow(-1, (i + 1)) * pow(x, (2 * i - 1)) / (factorial(2 * i - 1));
		printf("Step: %d Result: %f\n", i, result);
	}
	return result;
}

/*
	Функция sin_by_n вычисляет частичную сумму ряда по точности (т.е. по числу eps < 1)
*/

float sin_by_eps(float x, float eps){
	int n = 1;
	float result = 0;
	float var0 = 0;
	float var1 = 0;
	while(1){ // result < eps
		var1 = pow(-1, (n + 1)) * pow(x, (2 * n - 1)) / (factorial(2 * n - 1));
		if(abs(var0 - var1) < eps){
			// printf("%f\n", var0);
			// printf("%f\n", var1);
			// printf("%d\n", abs(var0 - var1));
			// printf("%f\n", eps);
			// printf("%f\n", result);
			return result;
		}
		var0 = var1;
		result += var0;
		printf("Step: %d Result: %f\n", n, result);
		n++;
	}
}

/*
	Функция factorial вычисляет факториал числа
*/

int factorial(int n){
	int result = 1;
	for(int i = 1; i <= n; i++){
		result *= i; 
	}
	return result;
} 

/*
	j - критерий завершения подсчета ( 0 – выход по точности, 1
	– выход по числу шагов)
*/

int main(){
	int n = 0;
	float x = 0;
	float eps = 0;
	int j = 0;
	printf("Enter a n: ");
	scanf("%i", &n);
	printf("Enter a eps: ");
	scanf("%f", &eps);
	printf("Enter a x: ");
	scanf("%f", &x);
	printf("Enter a '0' to count by the number of steps or '1' count by eps: ");
	scanf("%i", &j);

	if(j == 0){
		sin_by_n(x, n);
	}
	else{
		sin_by_eps(x, eps);
	}

	return 0;
}