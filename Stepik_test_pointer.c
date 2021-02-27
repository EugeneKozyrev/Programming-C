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