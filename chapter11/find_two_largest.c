#include <stdio.h>

#define N 10

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    *largest = *second_largest = a[0];
    for (int i = 1; i < N; i++)
    {
        if(*largest < a[i]) 
        {
            *second_largest = *largest;
            *largest = a[i];
        }
        else if (*second_largest < a[i])
        {
            *second_largest = a[i];
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
