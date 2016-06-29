#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Ensure argument number
    if (argc != 2)
    {
        printf("Incorrect number of arguments\n");
        return 1;
    }
    else
    {
        string k = argv[1];
        int keylen = strlen(k);
        
        // Make sure key is all alphabetical
        for (int a = 0, b = keylen; a < b; a++)
        {
            if (isalpha(k[a]) == 0)
            {
                printf("Key is not all alphabetical\n");
                return 1;
            }
        }
        
        string text = GetString();
        
        
        
        // Now loop through text and k simultaneously
        
        int s = 0;
        for (int x = 0, y = strlen(text); x < y; x++)
        {
            //Get ASCII number for first key letter
            int p;
            int r;
            int m = s % keylen; //key index
            if isupper (text[x])
            {
                s = s+1;
                p = (text[x] - 65) % 26; //text letter
                if isupper (k[m])
                {
                    r = (k[m] - 65) % 26; //key letter
                    int q = (p + r) % 26;
                    printf ("%c", q + 65);
                }
                else
                {
                    r = (k[m] - 97) % 26; //key letter
                    int q = (p + r) % 26;
                    printf ("%c",q + 65);
                }
  
            }
            
            else if islower (text[x])
            {
                s = s+1;
                p = (text[x] - 97) % 26; //text letter
                if isupper (k[m])
                {
                    r = (k[m] - 65) % 26; //key letter
                    int q = (p + r) % 26;
                    printf ("%c", q + 97);
                }
                else
                {
                    r = (k[m] - 97) % 26; //key letter
                    int q = (p + r) % 26;
                    printf ("%c",q + 97);
                }
            }
            else
                printf("%c", text[x]);
          
        }
        printf("\n");
        return 0;
    }
}