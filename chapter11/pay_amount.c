#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    *tens = (dollars - (*twenties * 20)) / 10;
    *fives = (dollars - (*twenties * 20) - (*tens * 10)) / 5;
    *ones = (dollars - (*twenties * 20) - (*tens * 10) - (*fives * 5));
}

int main(void)
{
    int dollars = 97;
    int twenties;
    int tens;
    int fives;
    int ones;
    
    pay_amount(dollars, &twenties, &tens, &fives, &ones);
    
    printf("dollars is %d\n", dollars);
    printf("twenties is %d\n", twenties);
    printf("tens is %d\n", tens);
    printf("fives is %d\n", fives);
    printf("ones is %d\n", ones);
    
    return 0;
}
