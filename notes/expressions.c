// AE 7th Expressions Notes
#include <stdio.h>
#include <math.h>

int main(void){
    int year = 2025;
    float pi = 3.14;
    double long_pi = 3.14159265359

    printf("%d\n", year);
    printf("%d\n", 8/3); 
    printf("%f\n", 8.0/3);
    printf("%.2f\n", (int) pow(2, 4));

    year += 1 //compound assignment operator
    printf("%d", year);
    year++; //incrimentor
    printf("%d", year);

    return 0;
}