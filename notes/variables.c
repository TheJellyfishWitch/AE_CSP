// AE 7th Variables Notes!
#include <stdio.h>

int main(void){
    int grade = 95; //4 bytes
    float pi = 3.14; //4 bytes
    double long_pi = 3.1415926357; //8 bytes
    char letter_grade = 'A'; //1 byte
    char name[] = "Addie";
    printf("%s did it!", name);
    printf("You have a %d, in the class. That is an %c", grade, letter_grade);

    return 0;
}
// s is for string
// d is for digit
// strings have to be surrounded by ""
// single digits have to be surrounded by ''