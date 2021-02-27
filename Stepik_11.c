#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	int n = 0;
	int k = 0;
	int result = 0;
	scanf("%d %d", &n, &k);
	for(int i = 1; i <= n; i++){
		result += k * i;
	}
	printf("%d", result);
    return 0;
}   