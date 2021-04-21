#include <stdio.h>

int write(char* filename, char* message, int n){
    FILE* filePointer_1 = fopen("date.txt", "w");
    if(filePointer_1 == NULL){
        perror("ERROR!");
        return 0;
    }

    for (int i = 0; i < n; ++i) {
        putc(message[i], filePointer_1);
    }
    fclose(filePointer_1);
    return 1;
}

int read(char* filename){
    FILE* filePointer = fopen("date.txt", "r");
    char CHAR;
    if(filePointer == NULL){
        perror("ERROR!");
        return 0;
    }

    while ((CHAR = getc(filePointer)) != EOF){
        printf("%c", CHAR);
    }

    fclose(filePointer);
    return 1;
}

int main() {

    char hello[] = "Hello";
    char* fileName = "date.txt";

    int length = sizeof(hello) / sizeof(hello[0]);

    write(fileName, hello, length);
    read(fileName);

    return 0;
}