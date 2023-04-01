#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    for (int i = 2; i < numerator; i++)
    {
        if(numerator % i == 0 && denominator % i == 0)
        {
            *reduced_numerator = numerator / i;
            *reduced_denominator = denominator / i;
        }
    }
}

int main(void)
{
    int numerator = 16;
    int denominator = 20;
    int reduced_numerator;
    int reduced_denominator;
    
    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);
    
    printf("numerator is %d\n", numerator);
    printf("denominator is %d\n", denominator);
    printf("reduced_numerator is %d\n", reduced_numerator);
    printf("reduced_denominator is %d\n", reduced_denominator);
    
    return 0;
}
