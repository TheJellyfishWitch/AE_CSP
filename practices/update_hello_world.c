// AE 7th Update Hello World
#include <stdio.h>

char welcome(char* name){
    printf("Hello %s", name);
}

int main(void){
    welcome("Alexa\n");
    welcome("Bob\n");
    welcome("Jerry\n");
    welcome("George\n");
    welcome("JEFF\n");

    return 0;
}