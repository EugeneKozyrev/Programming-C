#include <stdio.h>
#include <math.h>

/*
	Найти площадь и периметр заданного по трем точкам на плоскости треугольника.
*/

int main(){
	float x0 = 0;
	float y0 = 0;
	printf("Enter x0 y0\n");
	scanf("%f %f", &x0, &y0);
	float x1 = 0;
	float y1 = 0;
	printf("Enter x1 y1\n");
	scanf("%f %f", &x1, &y1);
	float x2 = 0;
	float y2 = 0;
	printf("Enter x2 y2\n");
	scanf("%f %f", &x2, &y2);
	float h = 0;
	h = fabs((y2 - y1) * x0 - (x2 - x1) * y0 + x2 * y1 - y2 * x1) / sqrt(((y2 - y1) * (y2 - y1)) + ((x2 - x1) * (x2 - x1)));
	float dist0 = 0;
	float dist1 = 0;
	float dist2 = 0;
	dist0 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	dist1 = sqrt(pow((x1 - x0), 2) + pow((y1 - y0), 2));
	dist2 = sqrt(pow((x0 - x1), 2) + pow((y0 - y1), 2));
	float square = 0;
	float perimetr = 0;
	square = (dist0 / 2) * h;
	perimetr = dist0 + dist1 + dist2;
	printf("%f\n", square);
	printf("%f\n", perimetr);
	return 0;
}