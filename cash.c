#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);


int main(void)
{
    //Prompt the user for change owed, in cents
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    //Calculate how many quarters you should give customer
    int quarters = calculate_quarters(cents);
    cents = cents - (quarters * 25);

    int dimes = calculate_dimes(cents);
    cents = cents - (dimes * 10);

    int nickels = calculate_nickels(cents);
    cents = cents - (nickels * 5);

    int pennies = calculate_pennies(cents);
    cents = cents - (pennies * 1);

    int total = quarters + dimes + nickels + pennies;

    printf("Total coins: %i\n", total);
}

int calculate_quarters(int cents)
{
    //Calculate how many quarters you should give customer
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents -= 25;
    }
    return quarters;
}
//Calculate how many dimes you should give customer
int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents -= 10;

    }
    return dimes;
}

int calculate_nickels(int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {
        nickels++;
        cents -= 5;

    }
    return nickels;
}

int calculate_pennies(int cents)
{
    int pennies = 0;
    while (cents >= 1)
    {
        pennies++;
        cents -= 1;
    }
    return pennies;
}
