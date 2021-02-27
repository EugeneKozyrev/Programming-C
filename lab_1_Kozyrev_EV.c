#include <stdio.h>
#include <math.h>

/*
	Функция factorial вычисляет факториал числа
*/

long long factorial(int n){
	long long result = 1;
	for(int i = 1; i <= n; i++){
		result *= i; 
	}
	return result;
};

/*
	Функция my_abs аналог библиотечного abs, но принимает тип float как аргумент
*/

float my_abs(float n){
	if(n < 0.0){
		return n * -1;
	}
	else{
		return n;
	}
}

/*
	Функция deeg_to_rad переводит градусы в радианы 
*/

float deeg_to_rad(int n){
	return ((float) n * 3.14) / 180.0;
}


/*
	Функция sin_by_n вычисляет частичную сумму ряда по количеству шагов n(
	кол-во шагов = кол-ву слагаемых в сумме)
*/

float sin_by_n(float x, int n){
	float result = 0;
	for (int i = 1; i <= n; i++){
		result += pow(-1, (i + 1)) * pow(x, (2 * i - 1)) / (factorial(2 * i - 1));
		printf("Step: %d Result: %f ", i, result);
		printf("Delta : %f\n", my_abs(sin(x) - result));
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
		if(my_abs(var0 - var1) < eps){
			return result;
		}
		var0 = var1;
		result += var0;
		printf("Step: %d Result: %f ", n, result);
		printf("Delta : %f\n", my_abs(sin(x) - result));
		n++;
	}
}


/*
	Программа вычисляет значение  функции sin(x) в
	точке x приближенно т.е. с помощью ряда.
	
*/

int main(){
	int n = 0;
	float x = 0;
	float eps = 0;
	int j = 0; // j - критерий завершения подсчета ( 1 – выход по точности, 0 – выход по числу шагов)
	printf("Enter a n: ");
	scanf("%i", &n);
	printf("Enter a eps: ");
	scanf("%f", &eps);
	printf("Enter a x in deegrice: ");
	scanf("%f", &x);
	x =  deeg_to_rad(x);
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