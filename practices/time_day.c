// AE 7th Time of Day
#include <stdio.h>

int main(void){
    int time;

    printf("Please enter the hour in military time: ");
    scanf("%d", &time);

    if(time >= 20 && time <= 24 || time < 5){
        printf("Your awake at this time?!?");
    }else if(time >= 6 && time < 11){
        printf("Good morning, the earth, says, hello!");
    }else if(time >= 12 && time <= 17){
        printf("Good afternoon! :)");
    }else if(time >= 0 && time < 5){
        printf("Good night");
    }else{
        printf("Military time is only 0 - 24, you entered %d which is not a real time, please try again :)", time);
    }

    return 0;
}