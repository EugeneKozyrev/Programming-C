#include <stdio.h>
#include <stdlib.h>
 
#define T char
#define SIZE 1000
#define true 1 == 1
#define false 1 != 1 
 
typedef int boolean;

T queue[SIZE];

int first = 0;
int last = -1;
int items = 0;

boolean enqueue(T data){
	if(items == SIZE){
		return false;
	}
	if(last == SIZE - 1){
		last = -1;
	}
	queue[++last] = data;
	items++;
	return true;
}

T dequeue(){
	if(items == 0){
		return -1;
	}
	else{
		T temp = queue[first++];
		first %= SIZE;
		items--;
		return temp;
	}	
}



int main(int argc, char const *argv[]){
	int i = 0;
	while(i < 5){
		enqueue('a');
		enqueue('b');
		enqueue('c');
		enqueue('d');
		enqueue('e'); 
		enqueue('f');
		while(items > 0){
			printf("%c\n", dequeue());
			printf("\n");
			i++;
		}
	}
	return 0;
}