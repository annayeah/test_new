#include <stdio.h>
int tmain()
{
    int amount = 0.46;
    int cents_amount = amount * 100;
    int total_counter;
    while (amount >=25);
    {
        int quarters = cents_amount / 25;
        int dimes = (cents_amount % 25) / 10;
        int nickels = ((cents_amount % 25) % 10) / 5;
        int pennies = ((cents_amount % 25) % 10) % 5;
        total_counter = quarters + dimes + nickels + pennies;
    }

    printf(total_counter);
}
