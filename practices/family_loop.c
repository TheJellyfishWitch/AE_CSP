// AE 7th My Family Loop
#include <stdio.h>

int main(void){
    char family_members[][20] = {"Jill", "Hyrum", "Joey", "Mom"};

    for(int i = 0; i < 4; i++){
        printf("Hello, %s!\n", family_members[i]);
    }


    return 0;
}