#include <stdio.h>
#include <math.h>

int main() {
    float a = 0;
	float b = 0;
	scanf("%f %f", &a, &b);
	float res_1 = (pow(a, 2) + pow(b, 2)) / 2;
	float res_2 = (fabs(a) + fabs(b)) / 2;
	printf("%.2f %.2f", res_1, res_2);
    return 0;
}   