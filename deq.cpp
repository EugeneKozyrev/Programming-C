#include<iostream>
#include "deq.h"
 
using namespace std;

// Конструктор 
Deque::Deque() {
    size = 0;
    first = last = NULL;
}
 
// Деструктор
Deque::~Deque() {
    Node *current = NULL;
    Node *next = first;
    while (next) {
        current = next;
        next = next->next;
        delete current;
    }
}
 
// Вывести голову дека
int Deque::Head() const {
    return first->item;
}
 
// Вывести хвост дека
int Deque::Tail() const {
    return last->item;
}

// Добавить элемент в начало дека
void Deque::push_front(int item) {
    Node *newItem = new Node(item, first);
    if(!first){
        last = newItem;
    }
    first = newItem;
    size++;
}
 
// Добавить элемент в конец дека
void Deque::push_back(int item) {
    Node *newItem = new Node(item);
    if(!last){
        first = newItem;
    }
    else{
        last->next = newItem;
    }
    last = newItem;
    size++;
}
 
// Удалить элемент из начала дека
int Deque::pop_front() {
    int res = first->item;
    first = first->next;
    size--;
    return res;
}
 
// Удалить элемент из конца дека
int Deque::pop_back() {
    int res = last->item;
    last = last->next;
    size--;
    return res;
}
 
 
// Вывести колличество узлов дека
void Deque::printCount() {
    cout << size << endl;
}
 
// Вывести дек с начала до хвоста
void Deque::printFront() {
    Node *current = first;
    while(current){
        cout << current->item << ' ';
        current = current ->next;
    }
}

// Вывести дек с конца до начала


// Удаление всех элементов - сброс дека
