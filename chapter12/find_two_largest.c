#include <stdio.h>

#define N 10

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    const int *i;
    *largest = *second_largest = *a;
    for (i = a; i < a + N; i++)
    {
        if(*largest < *i) 
        {
            *second_largest = *largest;
            *largest = *i;
        }
        else if (*second_largest < *i)
        {
            *second_largest = *i;
        }
    }
}

int main(void)
{
    int all[N] = {20, 30, 35, 56, 51, 93, 12, 21, 56, 72};
    
    int largest;
    int second_largest;
    
    find_two_largest(all, N, &largest, &second_largest);

    printf("largest is %d\n", largest);
    printf("second_largest is %d\n", second_largest);
    
    return 0;
}
