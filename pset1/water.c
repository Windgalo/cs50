#include <stdio.h>
#include <cs50.h>

int bottles();


int main(void)
{
    printf("Minutes: ");
    int minutes = get_int();
    printf("Bottles: %i\n", bottles(minutes)); 
    
}

int bottles(minutes)
{
    int n = minutes * 12;  
    return n;
}