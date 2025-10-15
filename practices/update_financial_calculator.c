// AE 7th Update Financial Calculator
#include <stdio.h>

float input(char* category) {
    float amount;
    printf("What is your monthly %s: ", category);
    scanf("%f", &amount);
    return amount;
}

// Function to calculate percentage of income
float percent(float income, float expense) {
    return (expense * 100.0) / income;
}

int main(void) {
    printf("Welcome user, this is your Financial Calculator\n");

    float income = input("income");
    float rent = input("rent/mortgage");
    float utilities = input("utilities");
    float groceries = input("groceries");
    float transportation = input("transportation");

    float rent_percent = percent(income, rent);
    float util_percent = percent(income, utilities);
    float gro_percent = percent(income, groceries);
    float trans_percent = percent(income, transportation);
    float save = income * 0.1;
    float save_percent = 10.0;
    float spending = income - (rent + utilities + groceries + transportation + save);

    printf("Your rent is $%.2f and that is %.0f%% of your income.\n", rent, rent_percent);
    printf("Your utilities are $%.2f and that is %.0f%% of your income.\n", utilities, util_percent);
    printf("Your groceries are $%.2f and that is %.0f%% of your income.\n", groceries, gro_percent);
    printf("Your transportation is $%.2f and that is %.0f%% of your income.\n", transportation, trans_percent);
    printf("You should save $%.2f a month, that is %.0f%% of your income.\n", save, save_percent);
    printf("You have $%.2f of spending money each month!\n", spending);

    return 0;
}