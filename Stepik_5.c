#include <stdio.h>
#include <math.h>

int main() {
	float l = 0;
	float pi = 3.14;
	scanf("%f", &l);
	float r = l / (2 * pi);
	float s = pi * pow(r, 2);
	printf("%.2f", s);
    return 0;
}   