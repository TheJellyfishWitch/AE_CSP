#include <stdio.h>

int main(void){
    int num = 0;
    while(num <= 49){
        num++;
        if(num % 3 == 0 && num % 5 == 0){
            printf("FizzBuzz\n");
        }else if(num % 5 == 0){
            printf("Buzz\n");
        }else if(num % 3 == 0){
            printf("Fizz\n");
        }else{
            printf("%d\n", num);
        }
    }

    return 0;
}