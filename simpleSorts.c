#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;  
}

int** initArray(int** array, const int row, const int col){
    array = (int**) calloc(sizeof(int*), row);
    for(int idx = 0; idx < row; ++idx){
        *(array + idx) = (int*) calloc(sizeof(int), col);
    }
    return array;
}

void fillArray(int** array, const int row, const int col){
    for(int i = 0; i < row; ++i){
        for(int j = 0; j < col; ++j){
            *((*(array + i)) + j) = rand() % 100;
        }
    }
}

void printArray(int** array, const int row, const int col){
    for(int i = 0; i < row; ++i){
        for(int j = 0; j < col; ++j){
            printf("%3d", *((*(array + i)) + j));    
        }
        printf("\n");
    }
}

void bubbleSort(int** array, const int row, const int col){
    for(int i = 0; i < row; ++i){
        for(int j = 0; j < col; ++j){
            for(int k = 0; k < col - 1; ++k){
                if(array[i][k] > array[i][k + 1]){
                    int temp = *((*(array + i)) + k);
                    *((*(array + i)) + k) = *((*(array + i)) + (k + 1));
                    *((*(array + i)) + (k + 1)) = temp;
                }   
            }
        }
    }
}

void shakerSort(int** array, const int row, const int col){
    for(int i = 0; i < row; ++i){
        int left = 1;
        int right = col - 1;
        while(left <= right){
            int j;
            for(j = right; j >= left; --j){
                if(array[i][j - 1] > array[i][j]){
                    int temp = array[i][j - 1];
                    array[i][j - 1] = array[i][j];
                    array[i][j] = temp;
                }
            }
            left++;
            for(j = left; j <= right; ++j){
                if(array[i][j - 1] > array[i][j]){
                    int temp = array[i][j - 1];
                    array[i][j - 1] = array[i][j];
                    array[i][j] = temp;
                }
            }
            right--;
        }
    }
}

void insertSort(int** array, const int row, const int col){
    for(int i = 0; i < row; ++i){
        int temp, pos;
        for(int j = 1; j < col; ++j){
            temp = array[i][j];
            pos = j - 1;
            while(pos >= 0 && array[i][pos] > temp){
                array[i][pos + 1] = array[i][pos];
                pos--;
            }
            array[i][pos + 1] = temp;
        }
    }
}

void selectionSort(int** array, const int row, const int col){
    for(int i = 0; i < row; ++i){
        int min;
        for(int j = 0; j < col - 1; ++j){
            min = j;
            for(int k = j + 1; k < col; ++k){
                if(array[i][k] < array[i][min]){
                    min = k;
                }
            }
            int temp = array[i][min];
            array[i][min] = array[i][j];
            array[i][j] = temp;
        }
    }
}

int main(int argc, int const *argv[])
{
    const int row = 10;
    const int col = 10;
    int** mas = initArray(mas, row, col);
    fillArray(mas, row, col);
    printf("\n  before  \n");
    printArray(mas, row, col);
    printf("\n  after  \n");
    //bubbleSort(mas, row, col);
    //shakerSort(mas, row, col);
    //insertSort(mas, row, col);
    selectionSort(mas, row, col);
    printArray(mas, row, col);
    return 0;
}