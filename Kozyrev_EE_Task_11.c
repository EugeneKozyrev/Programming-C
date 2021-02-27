#include <stdio.h>
#include <math.h>

/*
	Определить, пересекаются ли две заданные пользователем прямые на плоскости, если  - да, найти координаты точки пересечения.
*/

void own_point(float k1, float k2, float b1, float b2, float *x, float *y){
	*x = (b2 - b1) / (k1 - k2);
	*y = k1 * (*x) + b1;
}

int main(){
	float x = 0;
	float y = 0;
	float k1 = 0;
	scanf("%f", &k1);
	float b1 = 0;
	scanf("%f", &b1);
	float k2 = 0;
	scanf("%f", &k2);
	float b2 = 0;
	scanf("%f", &b2);
	if(k1 == k2){
		printf("False, line is on line or lines are parallel\n");
	}
	else{
		own_point(k1, k2, b1, b2, &x, &y);
		printf("True, point of cross in coordinats: %f %f\n", x, y);
	}
	return 0;
}