// AE 7th Silly Sentences
#include <stdio.h>
#include <string.h>

int main(void){
    char name;
    char left[] = "<<<";
    char right[] = ">>>";
    printf("Please enter your name:\n");
    scanf("%c", name);
    
    strcat(left, name);

    return 0;
}