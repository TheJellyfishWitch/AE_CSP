// AE 7th Update Hello World
#include <stdio.h>

void welcome(char* name){
    printf("Hello %s\n", name);
    scanf("%s", name);
}

int main(void){
    welcome("Alexa");
    welcome("Bob");
    welcome("Jeff");
    welcome("Jerry");
    welcome("Nathan");
    return 0;
} 