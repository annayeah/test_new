#include <stdio.h>

int main(void)
{
    int height = 25;

    for (int i = 2; i <= height; i++); // for hashes
    {

        for (int j = 1; j <= height; j++);// for spaces
        {
        printf("#");
        }
        printf("\n");
    }
    return 0;
}