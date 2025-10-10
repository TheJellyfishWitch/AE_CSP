// AE 7th Conditionals Notes
#include <stdio.h>
#include <string.h>
/* Logical Operators
python: and, or not
C: &&(and) ||(or) !(not)
*/

int main(void){
    int grade;
    char name[50];
    printf("Enter your grade percentage: ");
    scanf("%d", &grade);

    printf("Enter your name: ");
    scanf("%s", &name);

    //printf("&d\n", strcmp(name, "Ms. LaRose"));
    if(strcmp(name, "Ms. LaRose") == 0){
        printf("You don't get a grade because your a teacher :)\n");
    }else if(grade >= 90){
        printf("You have an A!\n");
    }else if(grade >= 80){
        printf("You have a B\n");
    }else if(grade >= 70){
        printf("You have a C\n");
    }else{
        printf("You are failing :(\n");
    }

    return 0;
}