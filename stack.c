#include <stdio.h>
#include <stdlib.h>
 
#define T char
#define SIZE 1000
#define TRUE 1 == 1
#define FALSE 1 != 1 
 
typedef int boolean;

int stackPointer = -1;
T stack[SIZE];

boolean push(T data){
	if(stackPointer < SIZE){
		stack[++stackPointer] = data;
		return TRUE;
	}else{
		printf("%s\n", "Stack overflow");
		return FALSE;
	}
}

T pop(){
	if(stackPointer != -1){
		return stack[stackPointer--];
	}else{
		printf("%s\n", "Stack is empty");
		return -1;
	}
}

int main(int argc, char const *argv[]){
	push('a');
	push('b');
	push('c');
	push('d');
	push('e');
	while(stackPointer != -1)
		printf("%2c", pop());
	return 0;
}