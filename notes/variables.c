// AE 7th Variables Notes!
#include <stdio.h> // standard library

int main(void){
    int grade; //4 bytes : d
    const float pi = 3.14; //4 bytes : f
    double long_pi = 3.1415926357; //8 bytes : if
    char letter_grade; //1 byte : c
// -> list of characters for a string : s
    char name[] = "Addie";
// user input
    printf("What is your grade percentage as a whole number:\n");
    scanf("%d", &grade);

    printf("What is your letter grade:\n");
    scanf(" %c", &letter_grade);

    printf("%s did it!\n", name);
    printf("You have a %d, in the class. That is an %c.\n", grade, letter_grade);

    return 0;
}