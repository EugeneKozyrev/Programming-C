#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int x = 0;
	int y = 0;
	
	scanf("%d %d", &x, &y);
	if(x == 0 && y == 0){
		printf("начало координат 0_0");
	}
	else if(x == 0){
		printf("ось абсцисс x = 0");
	}
	else if(y == 0){
		printf("ось ординат y = 0");
	}
	else if(x > 0 && y > 0){
		printf("1-я четверть 1");
	}
	else if(x < 0 && y > 0){
		printf("2-я четверть 2");
	}
	else if(x < 0 && y < 0){
		printf("3-я четверть 3");
	}
	else {
		printf("4-я четверть 4");
	}
	
    return 0;
}   