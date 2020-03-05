#include <stdio.h>

int main()
{
    float amount = 0.46;
    int cents_amount = amount * 100;
    int total_counter = 0;
    while (amount >= 25);
    {
        int quarters = cents_amount / 25;
        int dimes = (cents_amount % 25) / 10;
        int nickels = ((cents_amount % 25) % 10) / 5;
        int pennies = ((cents_amount % 25) % 10) % 5;
        total_counter = quarters + dimes + nickels + pennies;
    }

    printf("%d", total_counter);
}
