#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime(long long a) {
    for (long long i = 2; i <= sqrt(a); i++) {
        if (a % i == 0){
            return 0;
        }      
    }
    return 1;
}

int main() {
    int a = 0;
    scanf("%d", &a);
    printf("%d\n", prime(a));
    return 0;
}   