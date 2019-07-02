#include <cs50.h>
#include <stdio.h>

int countDigits();
bool checkValid();
int returnDigit();
    
int main(void)
{
    //get card number
    
    printf("Number: ");
    long long ccnum = get_long_long();
   
    //check validation
    int first_digit = returnDigit(ccnum);
    
    if (checkValid(ccnum) == true)
    {
        int d = countDigits(ccnum);
        if (d == 15) {
            printf("AMEX\n");
        } else if (d == 13) {
            printf("VISA\n");
        } else if (d == 16) {
            
                if (first_digit == 5) {
                    printf("MASTERCARD\n");
                } else if (first_digit == 4) {
                    printf("VISA\n");
                } else {
                    printf("INVALID\n");
                } 
            
        } else {
            printf("INVALID\n");
        }
    
    } else
    {
        printf("INVALID\n");
    }
    
    return 0;
}



bool checkValid(long long ccnum)
{
    int i = 0;
    int product = 0;
    int even_sum = 0;
    int odd_sum = 0;
    
    while(ccnum)
    {
        int this_digit = ccnum % 10;
        //printf("digit: %i\n", this_digit);
        if ((i % 2) == 0)
        {
           even_sum = even_sum + this_digit;  
        }
        else
        {
            product = this_digit * 2;
            if (product > 9){
                product = ((product / 10) + (product % 10));
            }
            //printf("digit times 2: %i ", product);
            odd_sum = odd_sum + product;
        }
        ccnum /= 10;
        i++;      
    } 
    //printf("Sum total is: %i plus %i\n", odd_sum, even_sum);
    if ((odd_sum + even_sum) % 10 == 0){
        return true;
    } else {
        return false;
    }
}

int countDigits(long long ccnum)
{
    int i = 0;
    while(ccnum)
    {
        //printf("%lld\n", ccnum % 10);
        ccnum /= 10;
        i++;
    }
    //printf("num of digits: %i\n", i);
    return i;
}

int returnDigit(long long ccnum)
{
    int d = 0;
    int i = 0;
    while(ccnum)
    {
        int digit = ccnum % 10;
        
        if (i == 15) {
            d = digit;
            break;
        }
        
        ccnum /= 10;
        i++;
    }
    return d;
}