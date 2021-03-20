#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

typedef struct {
    int priority;
    int value;
}Node;

Node* array[SIZE];
int headNode;
int tailNode;
int items;

void initNode(){
    for (int i = 0; i < SIZE; ++i) {
        array[i] = NULL;
    }
    headNode = 0;
    tailNode = 0;
    items = 0;
}

void insertNode(int insertPriority, int insertValue){
    Node *node = (Node*)malloc(sizeof(Node));
    node->priority = insertPriority;
    node->value = insertValue;
    int flag;

    if(items++ == 0){ // error
        array[tailNode++] = node;
    } else if(items == SIZE){
        perror("ERROR, QUEUE IS FULL");
        return;
    } else {
        int i = 0;
        int idx = 0;
        Node *temp;
        for(i = headNode; i < tailNode; ++i){
            idx = i % SIZE;
            if(array[idx]->priority > insertPriority)
                break;
            else
                idx++;
        }
        flag = idx % SIZE;
        i++;
        while (i <= tailNode){
            idx = i % SIZE;
            temp = array[idx];
            array[idx] = array[flag];
            array[flag] = temp;
            i++;
        }
        array[flag] = node;
        items++;
        tailNode++;
    }
    //free(node);
}

Node* removeNode(){
    if(items == 0)
        return NULL;
    else{
        int idx = headNode++ % SIZE;
        Node *temp = array[idx];
        array[idx] = NULL;
        items--;
        return temp;
    }
}

void printQueue(){
    printf("[  ");
    for (int i = 0; i < SIZE; ++i) {
        if(array[i] == NULL)
            printf("[*, *]");
        else
            printf("[%d, %d]", array[i]->priority, array[i]->value);
    }
    printf("  ]\n");
}

int main() {
    initNode();
    insertNode(1, 10);
    insertNode(2, 1032);
    insertNode(3, 12530);
    insertNode(2, 3410);
    insertNode(2, 13230);
    insertNode(4, 5310);
    insertNode(5, 5410);
    insertNode(1, 510);
    printQueue();
    removeNode();
    removeNode();
    removeNode();
    printQueue();
    return 0;
}