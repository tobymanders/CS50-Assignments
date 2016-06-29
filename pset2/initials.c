#include <ctype.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = GetString();
    int b = strlen(name);
    if (isupper(name[0]))
                printf("%c", name[0]);
            else
                printf("%c", name[0]-32);
    for (int a = 1; a < b; a++)
    {
        if (isalpha(name[a-1]) == 0)  
        {
            if (isupper(name[a]))
                printf("%c", name[a]);
            else
                printf("%c", name[a]-32);
        }
            
            
    }
    printf("\n");
    
}