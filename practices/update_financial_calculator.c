// AE 7th Update Financial Calculator
#include <stdio.h>

int calculate_percent(income, expence){
    if(income == 0){
        return 0.0;
    return (expence / income)* 100;
    }
}

int main(void){
    printf("Welcome user this is your Financial Calculator");
    int income;
    int rent;
    int untilities;
    int groceries;
    int transport;

    printf("Monthly Income\n");
    scanf("%d", income);
    printf("Rent/Morgage\n");
    scanf("%d", rent);
    printf("Utilities\n");
    scanf("%d", untilities);
    printf("Groceries\n");
    scanf("%d", groceries);
    printf("Transportation\n");
    scanf("%d", transport);

    int total_expences = rent + untilities + groceries + transport;

    printf("Expense Breakbown as a Percentage of Income:\n");
    printf("Rent/Morgage: %.2d %.2d %.2d%%", calculate_percent, income, rent);
    printf("Utilities: %.2d %.2d %.2d%%", calculate_percent, income, untilities);
    printf("Groceries: %.2d %.2d %.2d%%", calculate_percent, income, groceries);
    printf("Transportation: %.2d %.2d %.2d%%", calculate_percent, income, transport);
    printf("Total Expenses: %.2d %.2d %.2d%%", calculate_percent, income, total_expences);

    return 0;
}