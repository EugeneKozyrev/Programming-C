5.2
#include <stdio.h>
#include <stdlib.h>

void fillArrayElementary(int* array, int size);
void fillArrayRandom(int* array, int size);
void fillArrayManual(int* array, int size);
void printArray(int* array, int size);
void printArrayEven(int* array, int size);
void printArrayNotEven(int* array, int size);
int findArrayMaxElem(int* array, int size);
int findArrayMinElem(int* array, int size);
int findArrayEvenSum(int* array, int size);

int main(int argc, char const argv[]){
    const int len = 10;
    int arr[len] = {};
    fillArrayElementary(arr, len);
    printf("%d", findArrayEvenSum(arr, len));
    return 0;
}

void fillArrayElementary(int array, int size){
    for(int i = 0; i < size; ++i){
        array[i] = i;
    }
}

void fillArrayRandom(int* array, int size){
    for(int i = 0; i < size; ++i){
        array[i] = rand() % 100;
    }
}

void fillArrayManual(int* array, int size){
    for(int i = 0; i < size; ++i){
        scanf("%d", &array[i]);
    }
}

void printArray(int* array, int size){
    for(int i = 0; i < size; ++i){
        printf("%d ", array[i]);
    }
}

void printArrayEven(int* array, int size){
    for(int i = 0; i < size; i++ ){
        if(array[i] % 2 == 0) printf("%d ", array[i]);
    }
}

void printArrayNotEven(int* array, int size){
    for(int i = 0; i < size; i++){
        if(array[i] % 2 != 0) printf("%d ", array[i]);
    }
}

int findArrayMaxElem(int* array, int size){
    int max = array[0];
    for(int i = 0; i < size; i++){
        if(array[i] > max) max = array[i];
    }
    return max;
}

int findArrayMinElem(int* array, int size){
    int min = array[0];
    for(int i = 0; i < size; i++){
        if(array[i] < min) min = array[i];
    }
    return min;
}

int findArrayEvenSum(int* array, int size){
    int sum = 0;
    for(int i = 0; i < size; i +=2 ){
        sum += array[i];
    }
    return sum;
}
4.1.4 (last task)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char const *argv[]){
    int aChar = (int)'a' - (int)'A';
	char* str = (char*) malloc(100 * sizeof(char));
    char* strres = (char*) malloc(100 * sizeof(char));
	char* substr = (char*) malloc(100 * sizeof(char));
	gets(str);
    fflush(stdin);
    gets(substr);
    memcpy(strres, str,100);
	int strLen = 0;
	int substrLen = 0;
	int idx = 0;
	int iterator1 = 0;
    int iterator2 = 0;
	while(str[iterator1++] != '\0') strLen++;
	while(substr[iterator2++] != '\0') substrLen++;
	for(int i = 0; i < strLen; ++i){
        idx = 0;
		for(int j = 0; j < substrLen; ++j) {
            if (str[i + j] == substr[j]) idx++;
            if (idx == substrLen){
                for(int k = 0; k < substrLen; ++k){
                    if(strres[i + k] >= (int)'a'){
                        strres[i + k] -= aChar;
                    }
                    idx = 0;
                }
                idx = 0;
                break;
            }
        }
	}
    for(int i = 0; i < strLen; ++i){
            printf("%c", strres[i]);
    }
	return 0;
}
4.1.3
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
	char* str = (char*) malloc(100 * sizeof(char));
	char* substr = (char*) malloc(100 * sizeof(char));
	gets(str);
    fflush(stdin);
    gets(substr);
	int strLen = 0;
	int substrLen = 0;
	int idx = 0;
	int iterator1 = 0;
    int iterator2 = 0;
	while(str[iterator1++] != '\0') strLen++;
	while(substr[iterator2++] != '\0') substrLen++;
	for(int i = 0; i < strLen; ++i){
        idx = 0;
		for(int j = 0; j < substrLen; ++j) {
            if (str[i + j] == substr[j]) idx++;
            if (idx == substrLen){
                printf("%d ", i);
                idx = 0;
                break;
            }
        }
	}
	return 0;
}
4.1.2
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
	char* str = (char*) malloc(100 * sizeof(char));
	gets(str);
	while(*str){
		if((*str > 64) && (*str < 91)) *str += 32;
        printf("%c", *str);
        str++;
	}
	return 0;
}
4.1.1
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
	char* str = (char*) malloc(100 * sizeof(char));
	gets(str);
	int res = 0;
    int a = 0;
	while((*str) && (a++ < 100)){
        //printf("%c", *str);
		if(((int)*str >= (int)'a') && ((int)*str <= (int)'z')) res++;
        str++;
	}
	printf("%d", res);
	return 0;
}
3.3.4
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
	int hight, width; 

	scanf("%d", &width);

	int** arr1 = (int**) malloc(sizeof(int*) * width);

	for(int i = 0; i < width;++i){
  		*(arr1 + i) = (int*) malloc(sizeof(int) * width);
	}

	for(int i = 0; i < width; ++i){
 		for(int j = 0; j < width; ++j){
     		scanf("%d", &arr1[i][j]);
  		}
	}

	//scanf("%d", &hight);

	int** arr2 = (int**) malloc(sizeof(int*) * width);

	for(int i = 0; i < width;++i){
  		*(arr2 + i) = (int*) malloc(sizeof(int) * width);
	}

	for(int i = 0; i < width; ++i){
 		for(int j = 0; j < width; ++j){
     		scanf("%d", &arr2[i][j]);
  		}
	}

	int** arr3 = (int**) malloc(sizeof(int*) * width);

	for(int i = 0; i < width;++i){
  		*(arr3 + i) = (int*) malloc(sizeof(int) * width);
	}

	for(int i = 0; i < width; ++i){
 		for(int j = 0; j < width; ++j){
     		arr3[i][j] = 0;
  		}
	}

	for(int i = 0; i < width; i++){
 		for(int j = 0; j < width; j++){
 			for(int k = 0; k < width; k++){
 				arr3[i][j] += arr1[i][k] * arr2[k][j];
 			}
 		}	
	}
	for(int i = 0; i < width; i++){
 		for(int j = 0; j < width; j++){
 			printf("%d ", arr3[i][j]);
 		}
 		printf("\n");
	}
// for(int i = 0; i < width;++i){
	// 	free(arr1 + i);
	// 	free(arr2 + i);
//  	free(arr3 + i);
	// }
	// free(arr1);
	// free(arr2);
    //free(arr3);
	return 0;
}
3.3.3
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
	int size1, size2;
	scanf("%d", &size2);
	scanf("%d", &size1);
	int** arr = (int*) malloc(size1 * sizeof(int*));
	for(int i = 0; i < size1; ++i){
		*(arr + i) = (int) malloc(size2 * sizeof(int));
	}

	for(int i = 0; i < size1; ++i){
		for(int j = 0; j < size2; ++j){
			scanf("%d", &arr[i][j]); 
		}
	}

	int** mass = (int*) malloc(size2 * sizeof(int*));
	for(int i = 0; i < size2; ++i){
		*(mass + i) = (int) malloc(size1 * sizeof(int));
	}

	for(int k = 0; k < size1; ++k){
		for(int l = 0; l < size2; ++l){
			int temp = arr[k][l];
			mass[l][k] = arr[k][l];
			arr[k][l] = temp;
		}
	}
	for(int i = 0; i < size2; ++i){
		for(int j = 0; j < size1; ++j){
			printf("%d", mass[i][j]); 
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
3.3.2
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
	int size;
	scanf("%d", &size);
	int** arr = (int*) malloc(size * sizeof(int*));
	for(int i = 0; i < size; ++i){
		*(arr + i) = (int) malloc(size * sizeof(int));
	}
	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			scanf("%d", &arr[i][j]); 
		}
	}
	for(int k = 0; k < size; ++k){
		for(int l = 0; l < size; ++l){
			if(k == l) continue;
			if(k < l){
				int temp = arr[k][l];
			arr[k][l] = arr[l][k];
			arr[l][k] = temp;
			}
		}
	}
	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			printf("%d", arr[i][j]); 
            printf(" ");
		}
		printf("\n");
	}
	return 0;
}
3.3.1
#include <stdio.h>
#include <stdlib.h>

int main(){

	int hight, width; 

   scanf("%d %d", &width, &hight);

   int** mas = (int**) calloc(sizeof(int*), hight);

   for(int i = 0; i < hight;++i){
      *(mas + i) = (int*) calloc(sizeof(int), width);
   }

   for(int i = 0; i < hight; ++i){
      for(int j = 0; j < width; ++j){
         scanf("%d", &mas[i][j]);
      }
   }

   for(int i = 0; i < hight; ++i){
      for(int j = 0; j < width; ++j){
         printf("%d ", mas[i][j]);
      }
      printf("\n");
   }

   for (int i = 0; i < hight; ++i){
      free(mas[i]);
   }

   free(mas);

	return 0;
}
3.2
#include <stdio.h>
#include <stdlib.h>

int main() {

  int* mas;  // Объявление указателя на массив

  int count; // Объявление длины массива

  scanf("%d", &count); // ввозначения длины

  mas = (int*)malloc(count * sizeof(int));  // Запрос памяти
  
  for(int idx = 0; idx < count; idx++){
    scanf("%d", mas + idx);
  }

  for(int idx = 0; idx < count; idx++){
    printf("%d", *(mas + idx));
    printf(" ");
  }

  free(mas); // Освобождение памяти
  return 0;
}
