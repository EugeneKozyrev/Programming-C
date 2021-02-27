#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define SIZE 255

int evclid(int a, int b){
    while(a != b){
        if(a > b){
            a = a - b;
        }
        else{
            b = b - a;
        }
    }
    return a;
}

int evclid_f(int a, int b){
    int c = 0;
    while(b){
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}


int main() {

    int a = 0;
    int b = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d\n", evclid(a, b));
    printf("%d\n", evclid_f(a, b));

    int array[SIZE] = {2, 3};
    int cap = 2;
    for(int i = 4; i < SIZE; ++i){
        int prime = 1;
        for(int j = 0; j < cap; ++j){
            if(i % array[j] == 0){
                prime = 0;
                break;
            }
        }
        if(prime){
            array[cap++] = i;
        }
    }
    for(int idx = 0; idx < cap; ++idx){
        printf("%d ", array[idx]);
    }

    return 0;
}