#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int k = atoi(argv[1]);
        printf("argument: %i\n", k);
        string plaintext = get_string("plaintext: ");
        if (plaintext == NULL)
        {
            printf("error string not read\n");
            return 1;
        }
        else
        {
            printf("ciphertext: ");
            for (int i = 0, n = strlen(plaintext); i < n; i++)
            {
                if (isalpha(plaintext[i]))
                {
                    //initialize variable
                    int ascii = 0;
                    // preserve case
                    if (islower(plaintext[i]))
                    {
                        ascii = 97;
                    }
                    else if (isupper(plaintext[i]))
                    {
                        ascii = 65;
                    }
                    else
                    {
                        printf("error case\n");
                    }
                    // convert to num_index
                    plaintext[i] = plaintext[i] - ascii;
                    //printf("plaintext value: %i", plaintext[i]);
                    // do math
                    plaintext[i] = (plaintext[i] + k) % 26;
                    //printf("plaintext value: %i", plaintext[i]);
                    //convert to ascii values
                    plaintext[i] = plaintext[i] + ascii;
                    printf("%c", plaintext[i]);
                }
                else
                {
                    printf("%c", plaintext[i]);
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
}