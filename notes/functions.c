// AE 7th Functions Notes
#include <stdio.h>
void birthday(char* name, int age){ // VOID means nothing! // * means all: needed if code has different places where the paramater is needed
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday dear %s!\n", name); // name
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday %s you are %d!\n", name, age); // name
}

int multiply(int x, int y){
    return x *y;
}

float get_num(char* type){
    float value;
    printf("How many %s do you have?\n", type);
    scanf("%f", value);
    return value;
}

int main(void){
    birthday("Livy", 14);
    birthday("Leah", 28);
    birthday("Mykel", 15);
    int product = multiply(8,5); // save function as a variable for later use
    printf("%d\n", product); 
    printf("%d\n", multiply(4,6)); // just print the function if using once
    float pencils = get_num("pencils");
    float notebooks = get_num("notebooks");
    printf("You have %.2f pencils and %.2f notebooks :)\n", pencils, notebooks);
    return 0;
}