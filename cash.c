#include <stdio.h>
#include <cs50.h>

float get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    float coin;
    coin = get_cents();
    int cents = coin;

    int quarters;
    quarters = calculate_quarters(cents);
    cents -= quarters * 25;

    int dimes;
    dimes = calculate_dimes(cents);
    cents -= dimes * 10;

    int nickels;
    nickels = calculate_nickels(cents);
    cents -= nickels * 5;

    int pennies;
    pennies = calculate_pennies(cents);
    cents -= pennies * 1;

    printf("quarters %i\n", quarters);
    printf("dimes %i\n", dimes);
    printf("nickels %i\n", nickels);
    printf("pennies %i\n", pennies);
    printf("All coins: %i\n", quarters + dimes + nickels + pennies);
}

float get_cents(void)
{
    float cents;
    cents = get_float("O hai! How much change is owed?\n");
    while (cents < 0) {
        cents = get_float("How much change is owed?\n");
    }
    return cents;
}

int calculate_quarters(int coins)
{
    int quarters;
    quarters = coins / 25;
    return quarters;
}

int calculate_dimes(int coins)
{
    int dimes;
    dimes = coins / 10;
    return dimes;
}

int calculate_nickels(int coins)
{
    int nickels;
    nickels = coins / 5;
    return nickels;
}

int calculate_pennies(int coins)
{
    int pennies;
    pennies = coins / 1;
    return pennies;
}
