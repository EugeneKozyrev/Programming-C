#include<iostream>
#include "deq.h"

int main(int argc, char const *argv[]) {
	Deque deque;
	deque.push_front(10);
	deque.push_front(2);
	deque.printFront();
	deque.pop_back();
	deque.printFront();
	return 0;
}