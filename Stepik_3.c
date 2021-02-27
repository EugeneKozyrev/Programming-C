#include <stdio.h>
#include <math.h>

int main() {
    int v = 0;
	int u = 0;
	int t1 = 0;
	int t2 = 0;
	scanf("%d %d %d %d", &v, &u, &t1, &t2);
	int res = v * t1 + (v - u) * t2;
	printf("%d", res);
    return 0;
}   