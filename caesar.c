#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (argv[1][i] <= '0' || argv[1][i] >= '9')
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        
        if (argv[1] > 0)
        {
            string plain = get_string("plaintext: ");
            string cipher = plain;
            int k = atoi(argv[1]);
        
            for (int a = 0, b = strlen(plain); a < b; a++)
            {
                if (plain[a] >= 'a' && plain[a] <= 'z')
                {
                    int c = (int) plain[a] - 97 + k;
                    
                    do
                        if (c > 25)
                        {
                            c -= 26;
                        }
                    while (c > 25);
                    
                    cipher[a] = 97 + c;
                }
                if (plain[a] >= 'A' && plain[a] <= 'Z')
                {
                    int c = (int) plain[a] - 65 + k;
                    
                    do
                        if (c > 25)
                        {
                            c -= 26;
                        }
                    while (c > 25);
                    
                    cipher[a] = 65 + c;
                }
            }
            printf("ciphertext: %s\n", cipher);
        }
    }
    else
    {
        printf("Invalid Amount of Command-Line Arguments\n");
        return 1;
    }
}