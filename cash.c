#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars;
    int n = 0;
    
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);
    
    int cents = round(dollars * 100);
    
    while (cents > 0)
    {
        if (cents >= 25)
        {
            n++;
            cents -= 25;
            continue;
        }
        
        if (cents >= 10)
        {
            n++;
            cents -= 10;
            continue;
        }
        
        if (cents >= 5)
        {
            n++;
            cents -= 5;
            continue;
        }
        
        if (cents >= 1)
        {
            n++;
            cents -= 1;
            continue;
        }
    }
    
    printf("%i\n", n);
}