#include <stdio.h>
#include <stdlib.h>

/*
	Решето Эратосфена — алгоритм нахождения всех простых чисел до некоторого целого числа n. (255 - диапазон в котором будут вычисляться простые числа)
*/

int main(int argc, char const *argv[]){

	int array[255] = {2, 3};
	int capacity = 2;
	for(int i = 4; i < 255; ++i){
		int isPrime = 1;
		for (int j = 0; j < capacity; ++j){
			if(i % array[j] == 0){
				isPrime = 0;
				break;
			}
		}
		if(isPrime){
			array[capacity++] = i;
		}
	}

	for (int k = 0; k < capacity; ++k){
		printf("%d\n", array[k]);
	}
	printf("\n");

	return 0;
}