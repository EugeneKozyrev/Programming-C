#include <stdio.h>
#include <stdlib.h>

struct person{
    char name[16];
    int age;
};

int saveStructToFile(char* fileName, struct person *p){
    char* CHAR = (char*) p;
    int size = sizeof(struct person);
    FILE* filePointer = fopen(fileName, "wb");
    if(filePointer == NULL){
        perror("ERROR!");
        return 0;
    }
    for(int i = 0; i < size; ++i){
        putc(*CHAR++, filePointer);
    }
    fclose(filePointer);
    return 1;
}

int loadStructFromFile(char* fileName){
    char* CHAR;
    int i;
    int size = sizeof(struct person);
    struct person * ptr = (struct person *) malloc(size);
    FILE* filePointer = fopen(fileName, "rb");
    if(filePointer == NULL){
        perror("ERROR!");
        return 0;
    }
    CHAR = (char*) ptr;
    while ((i = getc(filePointer)) != EOF){
        *CHAR++ = i;
    }
    fclose(filePointer);
    printf("%-20s %5d", ptr->name, ptr->age);
    free(ptr);
    return 1;
}

int main() {
    char* fileName = "data.dat";
    struct person tom = {"Tom", 16};

    saveStructToFile(fileName, &tom);
    loadStructFromFile(fileName);
    return 0;
}