// AE 7th Update Hello World
#include <stdio.h>

char welcome(char* name){
    printf("Hello %s!", name);
    scanf("%s", &name);
}

int main(void){
    welcome("Alexa");
    welcome("Bob");

    return 0;
}