#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) 
{

    float user_change = 0;
    int cent = 0;
    int quarter = 0;
    int dime = 0;
    int nickel = 0;
    int leftover = 0;
    int coin = 0;
    int QUARTER = 25;
    int DIME = 10;
    int NICKEL = 5;
    
    do 
    {
        printf("Enter Change: ");
        user_change = GetFloat();
        
        if(user_change == 0|| user_change <= 0)
        printf("Please input a positive integer=>");
    }
    while(user_change <= 0);


    cent = (int)round(user_change*100);

    quarter = cent / QUARTER;
    leftover = cent % QUARTER;

    dime = leftover / DIME;
    leftover = leftover % DIME;
    
    nickel = leftover / NICKEL;
    leftover = leftover % NICKEL;
    
    coin = quarter + dime + nickel + leftover;
    
    printf("%d\n", coin);
    
    return 0;
}
