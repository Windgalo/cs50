#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define _XOPEN_SOURCE
#include <unistd.h>
#include <crypt.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        // Static example of crypt function! 
        /*
        char password[] = "AAAAA";
        char toCrack[] = "rofl";
        printf("%s\n", password);
        printf("%s\n", toCrack);
        
        char *toCrackCiph = crypt(toCrack, "50");
        printf("%s\n", toCrackCiph);

        char *passwordCiph = crypt(password, "aa");
        printf("%s\n", passwordCiph);
        return 0;
        */
        
        //printf(crypt("c\n", "50"));

        
        
        int len = strlen(argv[1]);
        for (int i = 0; i < len; i++)
        {
            printf("%c", argv[1][i]);
            if (i == 1)
            {
                char key = (argv[1][i]);
                int k = key - '0'; // changes key to int
                if (k == 0)
                {
                    printf("key is 0");
                    for (int genPass = 'a'; genPass < 'z'; genPass++)
                    {
                        char genPassStr[10];
                        sprintf(genPassStr, "%d", genPass);
                        string hash = crypt(genPassStr, "50");
                        if (hash == argv[1])
                        {
                            
                            printf("%s is the password!", genPassStr);
                        }
                    {
                        genPass++; 
                    }
            
                }
                }
                else if (k == 1)
                {
                    printf("key is 1");
                }
                else
                {
                    printf("error");
                    return 1;
                }
            }
        }
        printf("\n");
    }
    else
    {
        printf("Usage: ./crack hash\n");
        return 1;
    }
}

