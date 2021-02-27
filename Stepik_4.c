#include <stdio.h>
#include <math.h>

int main() {
	int v1 = 0;
	int v2 = 0;
	int s = 0;
	int t = 0;
	scanf("%d %d %d %d", &v1, &v2, &s, &t);
	int res = v1 * t + v2 * t + s;
	printf("%d", res);
    return 0;
}   