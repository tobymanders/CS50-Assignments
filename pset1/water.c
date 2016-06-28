#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf ("minutes: ");
    int s = GetInt();
    printf ("bottles: %i\n", s*192/16);
}