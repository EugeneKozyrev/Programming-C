#include <stdio.h>
#include <stdlib.h>

void decToBin(int a){
    if(a == 1){
        printf("%d", a);
    }else{
        decToBin(a / 2);
        printf("%d", a % 2);
    }  
}

int myPow(int a, int n){
    if(n == 0){
        return 1;
    }
    else if(n == 1){
        return a;
    }
    else{
        return a * myPow(a, n - 1);
    }
}

int myPowFast(int a, int n){
    if(n == 0){
        return 1;
    }
    else if(n == 1){
        return a;
    }
    else{
        if(n % 2 == 0){
            return myPowFast(a * a, n / 2);
        }
        else{
            return a * myPowFast(a, (n - 1) / 2) * myPowFast(a, (n - 1) / 2);
        }
    }
}

int main() {
    decToBin(16);
    printf("\n");
    printf("%d", myPow(2, 9));
    printf("\n");
    printf("%d", myPowFast(2, 9));
    return 0;
}