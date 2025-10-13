// AE 7th Loops Notes
#include <stdio.h>
#include <string.h>

int main(void){
    int nums[] = {1, 2334, 545, 5667, 88, 768, 2}; // Arrays
    char candies[][20] = {"Kitkat", "Skittles", "Snickers", "Nerds", "Reece's"};

    for(int x = 0; x < 7; x++){
        printf("%d\n", nums[x]);
    }

    for(int i = 0; i < 5; i++){
        printf("%s, is my fav candy!\n", candies[i]);
    }
    for(int num = 1; num < 11; num++){
        printf("%d\n", num);
    }

    int num = 0;
    while(num < 11){
        printf("%d\n", num);
        num++;
    }

    return 0;
}