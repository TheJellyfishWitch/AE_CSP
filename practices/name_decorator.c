// AE 7th Name Decorator
#include <stdio.h>
#include <string.h>

int main(void){
    char name[50];
    char left[] = "<<<";
    char right[] = ">>>";
    char result[75];

    printf("Please enter your name:\n");
    scanf("%s", name);
    
    strcat(result, left);
    strcat(result, name);
    strcat(result, right);

    printf("Here is your finnished name %s", result);

    return 0;
}