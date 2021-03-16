#include <stdio.h>
#include <locale.h>

#define SIZE 11

int* arrayAdd(int* arrayF, int* arrayS){
    int arrayRes[SIZE] = {};
    for (int i = 0; i < SIZE; ++i) {
        arrayRes[i] = arrayF[i] + arrayS[i];
    }
    for (int i = 0; i < SIZE; ++i) {
        printf("%dx%c%d ", arrayRes[i], 94, i);
    }
}

int* arraySub(int* arrayF, int* arrayS){
    int arrayRes[SIZE] = {};
    for (int i = 0; i < SIZE; ++i) {
        arrayRes[i] = arrayF[i] - arrayS[i];
    }
    for (int i = 0; i < SIZE; ++i) {
        printf("%dx%c%d ", arrayRes[i], 94, i);
    }
}

int* arrayMul(int* arrayF, int* arrayS){
    int arrayRes[SIZE] = {};
    for (int i = 0; i < SIZE; ++i) {
        for(int j = 0; j < SIZE; ++j){
            arrayRes[i + j] += arrayF[i] * arrayS[j];
        }
    }
    for (int i = 0; i < SIZE; ++i) {
        printf("%dx%c%d ", arrayRes[i], 94, i);
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    int arrayFirst[SIZE] = {};
    int arraySecond[SIZE] = {};

    for(int i = 0; i < SIZE; ++i){
        printf("Type coefficient for extent %d\nFor end of input, type 77\n ", i); // Для окончания ввода введите 77
        int inputNumber;
        scanf("%d", &inputNumber);
        if(inputNumber == 77)
            break;
        else
            arrayFirst[i] =  inputNumber;
    }

    for(int i = 0; i < SIZE; ++i){
        printf("Type coefficient for extent %d\nFor end of input, type 77\n ", i); // Для окончания ввода введите 77
        int inputNumber;
        scanf("%d", &inputNumber);
        if(inputNumber == 77)
            break;
        else
            arraySecond[i] =  inputNumber;
    }

    for (int i = 0; i < SIZE; ++i) {
        printf("%dx%c%d ", arrayFirst[i], 94, i);
    }

    printf("\n");

    for (int i = 0; i < SIZE; ++i) {
        printf("%dx%c%d ", arraySecond[i], 94, i);
    }

    printf("\n");

    arrayAdd(arrayFirst, arraySecond);

    printf("\n");

    arraySub(arrayFirst, arraySecond);

    printf("\n");

    arrayMul(arrayFirst, arraySecond);

    return 0;
}