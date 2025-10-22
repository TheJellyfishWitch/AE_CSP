// NOT AN ASSIGNMENT JUST HELP FROM MS LAROSE
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    srand(time(NULL));
    char names[][15] = {"Ally", "Bob", "Jerry", "Josh", "GERALD"};

    for(int i=0; i<5; i++){
        int num = rand() % 5; //% highest number + lowest number // need to specify how much we want to go up to
        printf("Your random number is %s\n", names[num]);
    }

    return 0;
}