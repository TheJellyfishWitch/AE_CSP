// AE 7th Financial Calculator
#include <stdio.h>
#include <math.h>

int main(void){
    printf("Welcome user this is your Financial Calculator");

    printf("Please enter your monthly costs:");
    int income 
   
    int rent 
        int utilities;
    int groceries;
    int transportaion;
    fgets("Transportation\n");
    fgets("Monthly Income\n");
    fgets("Utilities\n");
    fgets("Groceries\n");

    int per_rent = rent/income*100;
    int per_util = utilities/income*100;
    int per_gro = groceries/income*100;
    int per_trans = transportaion/income*100;
    int save = income/10;
    int total = income - (rent + utilities + groceries + transportaion);

    printf("Your rent is $%d which is %d of your income!\n", rent, per_rent);
    printf("Your utilities are $%d which is %d of your income!\n", utilities, per_util);
    printf("Your groceries are $%d which is %d of your income!\n", groceries, per_gro);
    printf("Your transortation is $%d which is %d of your income!\n", transportaion, per_trans);
    printf("You should save %d", save);
    printf("You have $", total, "of spending each month");

    return 0;
}