#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
     {
        printf("You must include an argument\n");
        return 1;
     }
    else 
    {
        string text = GetString();
        int i = atoi(argv[1]);
            for (int a = 0, b = strlen(text); a < b; a++)
            {
                if (isalpha(text[a]))
                {
                    if (isupper(text[a]))
                        {
                           int np = ((text[a] + i - 64) % 26) ;
                                if (np != 0)
                                {
                                    printf("%c", np + 64);

                                }
                                 else 
                                 {
                                    printf("%c",text[a] + (i % 26));
                                 }
                                    
                        }
                    else 
                        {
                            int np = ((text[a] + i - 96) % 26);
                                if (np != 0)
                                {
                                    printf("%c", np + 96);
                                }
                                 else 
                                 {
                                    printf("%c",text[a] + (i % 26));
                                 }
                        }
                }
                else 
                    printf("%c",text[a]);
            }
        printf("\n");
        return 0;
    }
}