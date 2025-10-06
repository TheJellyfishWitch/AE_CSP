// AE 7th Variables Notes!
#include <stdio.h> // standard library

int main(void){
    int grade; //4 bytes : d
    const float pi = 3.14; //4 bytes : f
    double long_pi = 3.1415926357; //8 bytes : if
    char letter_grade; //1 byte : c
//-> list of characters for a string : s
    char name[50];
//user input
    printf("What is your name?");
    fgets(name, sizeof(name), stdin); //cannot manually input number, has to be from a thing, ex: "sizeof(example variable)" 
//fgets adds a space at the end, can be fixed but quite advanced, ex: name *newline w/ space* is cool 

    printf("What is your grade percentage as a whole number:\n");
    scanf("%d", &grade);
    while (getchar() != '\n'); //the enter is taken as another variable, we have to get rid of it

    printf("What is your letter grade:\n");
    scanf("%c", &letter_grade);

    printf("%s did it!\n", name);
    printf("You have a %d, in the class. That is an %c.\n", grade, letter_grade);

    return 0;
}