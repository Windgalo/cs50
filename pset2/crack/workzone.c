#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define _XOPEN_SOURCE
#include <unistd.h>
#include <crypt.h>

int main(void)
{
    char password[] = "c";
    char *passwordCiph = crypt(password, "50");
    printf("%s\n", passwordCiph);
}