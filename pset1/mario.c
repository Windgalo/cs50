#include <cs50.h>
#include <stdio.h>

void placeSpace();
void buildPyramid();
int checkHeight();
void placeBlock();

int main(void)
{
    printf("Height: ");
    
    bool check_valid = true;
    while (check_valid == true)
    {
        int height = get_int();
    
        if (height > -1 && height < 24)
        {
            buildPyramid(height); 
            check_valid = false;
        }
        else 
        {
            printf("Retry: ")  ;  
        }
    }

}

void buildPyramid(height)
{
    int n = 0;
    
    for (int i = 0; i < height; i++)
    {
        placeSpace(height - (n + 1) );
        placeBlock(n);
        printf("#  #");
        placeBlock(n);
        printf("\n");
        n++;
    }
}

void placeSpace(height)
{
    for (int i = 0; i < height; i++)
    {
        printf(" ");
    }
}

void placeBlock(n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");   
    }
}
