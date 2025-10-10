// AE 7th Old Enough
#include <stdio.h>

int main(void){
    int age;

    printf("Enter your age: ");
    scanf("%d", age);

    if(age >= 18){
        printf("You are old enough to vote!");
    }else if(age >= 16){
        printf("You are old enough to legally drive!");
    }else if(age >= 15){
        printf("You are old enough to get a learner's permit to drive!");
    }else if(age >= 4){
        printf("You are old enough to go to school!");
    }else{
        printf("How are you typing?! Your %d years old!", age);
    }

    return 0;
}