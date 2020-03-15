#include <stdio.h>

int main()
{
    float amount = 0.46;
    int cents_amount = amount * 100;
    int coins_counter=0;
    int coins[4] = {25, 10, 5, 1};

    for (int i = 0; i < sizeof(coins[4]); i++)
    {

            coins_counter = coins_counter+(cents_amount / coins[i]);
            cents_amount=cents_amount% coins[i];
            

            
    }
    printf("%d\n", coins_counter);
    
}