// AE 7th First Program
#include <stdio.h>

int main(void){
    char name[50];
    printf("What is your name?");
    scanf("%s", name);
    printf("Hello, %s! This is your first C code!\n", name);

    return 0;
}