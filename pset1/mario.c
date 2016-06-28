#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get height
    int n;
    do {
        printf("height: ");
        n = GetInt();
    }
    while (n > 23 || n < 0);
    
    // Draw pyramid
    for (int i = 0; i < n; i++)
    { int spaces = n-i-1;
    int hashes = n+1-spaces;
        for (int a = 0; a < spaces; a++)
        {
           printf(" ");
        }
        for (int b = 0; b < hashes; b++)
        {
            printf("#");
        }
        printf("\n");
    }
}