#include <stdio.h>
#include <stdlib.h>

int triangle_1(int a){
    int result = 0;
    if(a == 1){
        result += 1;
    }
    else{
        result += a + triangle_1(a - 1);
    }
}

void printPyramid(int a){
    int i = 1;
    while(i <= a){
        int amount = i;
        char shift[6];
        sprintf(shift,"%%%dd", a + 1 - i);
        printf(shift, i);
        while(--amount != 0){
            printf("%2d", i);
        }
        printf("\n");
        i += 1;
    }
}

void printTriangle(int a){
    int prev = 0;
    while(a > 0){
        prev++;
        a -= prev;
        printf("%s%d", (prev > 1) ? " + " : "", prev);
    }

}

int main() {
    const int n = 3;
    printf("%d\n", triangle_1(n));
    triangle_1(n);
    printPyramid(triangle_1(n));
    printTriangle(triangle_1(n));
    return 0;
}