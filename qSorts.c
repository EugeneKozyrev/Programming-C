#include <stdio.h>
#include <stdlib.h>

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

void qsortL(int* array, int first, int last){
	if(first < last){
		int x = array[last];
		int i = first;
		int j;
		for(j = first; j <= last - 1; j++){
			if(array[j] <= x){
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				i++;
			}
		}
		int temp = array[i];
		array[i] = array[last];
		array[last] = temp;
		qsortL(array, first, i - 1);
		qsortL(array, i + 1, last);
	}
}

int int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}