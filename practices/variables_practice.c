// AE 7th Expressions Practice
#include <stdio.h>

int main(void){
    char name[] = "Addie";
    float num = 9;
    float gpa = 3.65;
    char breaky[] = "Toast";
    char fav_color[] = "Orange";
    char sch_name[] = "UCAS";
    float year = 2025;
    char eye_color[] = "Blue";
    int age = 14;
    char fav_subject[] = "Biology";

    printf("Name: %s\n", name);
    printf("A number: %.0f\n", num);
    printf("GPA: %.2f\n", gpa);
    printf("Breakfast food: %s\n", breaky);
    printf("Favorite color: %s\n", fav_color);
    printf("School: %s\n", sch_name);
    printf("Year: %.0f\n", year);
    printf("Eye color: %s\n", eye_color);
    printf("Age: %d\n", age);
    printf("Favorite subject: %s\n", fav_subject);

    return 0;
}