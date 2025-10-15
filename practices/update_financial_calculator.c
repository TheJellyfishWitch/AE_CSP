// AE 7th Update Financial Calculator
#include <stdio.h>

int input(char* name){
    int money;
    printf("What is your monthly %s\n", name);
    scanf("%d", &money);
    return money;
}

int percent(void){
    int rent_percent = 
}

int main(void){
    printf("Welcome user this is your Financial Calculator\n");
    
    input("income");
    int rent = input("rent");
    input("utility");
    input("groceries");
    input("transportation");



    // int per_rent = (rent * 100) / income;
    // int per_util = (utilities * 100) / income;
    // int per_gro = (groceries * 100) / income;
    // int per_trans = (transportation * 100) / income;
    // int save = income / 10;
    // int per_save = 10;
    // int total = income - (rent + utilities + groceries + transportation) - save;

    // printf("Your rent is $%d.00 and that is %d%% of your income.\n", rent, per_rent);
    // printf("Your utilities are $%d.00 and that is %d%% of your income.\n", utilities, per_util);
    // printf("Your groceries are $%d.00 and that is %d%% of your income.\n", groceries, per_gro);
    // printf("Your transportation is $%d.00 and that is %d%% of your income.\n", transportation, per_trans);
    // printf("You should save $%d.00 a month, that is %d%% of your income.\n", save, per_save);
    // printf("You have $%d.00 of spending money each month!\n", total);


    return 0;
}