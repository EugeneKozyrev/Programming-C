#include <stdio.h>
#include <stdlib.h>

int* initArray(int* array, int len){
    array = (int*) calloc(sizeof(int), len);
    return array;
}

void fillAray(int* array, int len){
    for(int i = 0; i < len; ++i){
        *(array + i) = rand() % 100;
    }
}

void printArray(int* array, int len){
    for(int i = 0; i < len; ++i){
        printf("%3d", *(array + i));
    }
    printf("\n");
}

void qSort(int* array, int first, int last){
    int i = first;
    int j = last;
    int mid = array[(first +last) / 2];

    do{
        while(array[i] < mid) i++;
        while(array[j] > mid) j--;

        if(i <= j){
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }while(i <= j);

    if(i < last) qSort(array, i, last);
    if(j > first) qSort(array, first, j);
}

int linearSearch(int* array, int len, int value){
    int i = 0;
    while(i < len && array[i] != value){
        i += 1;
    }
    if(i < len)
        return i;
    else
        return -1;
}

int bareerSearch(int* array, int len, int value){
    array[len] = value;
    int i = 0;
    while(array[i] != value){
        i += 1;
    }
    if(i < len)
        return i;
    else
        return -1;
}

int binarySearch(int* array, int len, int value){
    int l = 0;
    int r = len - 1;
    int mid = (l + r) / 2;

    while(l <= r && array[mid] != value){
        if(array[mid] < value)
            l = mid;
        else if(array[mid] > value)
            r = mid;
        mid = (l + r) / 2;
    }

    if(array[mid] == value)
        return mid;
    else
        return -1;
}

int main() {
    const int SIZE = 20;
    const int value = 91;
    int* arr = initArray(arr, SIZE);
    fillAray(arr, SIZE);
    //printf("\nIndex of number %d is: %d\n", value, linearSearch(arr, SIZE, value));
    //printf("\nIndex of number %d is: %d\n", value, bareerSearch(arr, SIZE, value));
    printArray(arr, SIZE);
    qSort(arr, 0, SIZE - 1);
    printArray(arr, SIZE);
    printf("\nIndex of number %d is: %d\n", value, binarySearch(arr, SIZE, value));
    return 0;
}