#include <stdio.h>
#include <stdlib.h>

/*
   Написать программу, которая осуществляет ввод и вывода значений двумерного динамического массива в виде матрицы.
*/

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
         printf("%d%s", *((*(mat + i)) + j), (j == N2 - 1 && i == N1 - 1) ? "" : " ");
      }
      printf("\n");
   }

   for (int i = 0; i < hight; ++i){
      free(mas[i]);
   }

   free(mas);

	return 0;
}