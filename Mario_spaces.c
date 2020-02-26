#include <stdio.h>
int main(void)
{
    int height = 6;
    for (int i = 1; i <= height; i++)
    {
      for (int s=(height-i); s>0; s--)
        {
            printf(" ");
           
        }
                 for (int j = 1; j <= i; j++)
            {
                       printf("#");
            }
                        printf("\n");
        
    }
}