#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float n;
    do {
        printf ("How much change is owed?\n");
        n = GetFloat();
    } while (n < 0);
    int left = round(100*n);
    int count = 0;
    
    //quarters
    while (left >= 25)
    {
        left = left - 25;
        count = count + 1;
    }
    
    //dimes
    while (left >= 10)
    {
        left = left - 10;
        count = count + 1;
    }
    
    //nickels
    while (left >= 5)
    {
        left = left - 5;
        count = count + 1;
    }
    
    //pennies
    while (left >= 1)
    {
        left = left - 1;
        count = count + 1;
    }
    
    printf("%i\n", count);
}