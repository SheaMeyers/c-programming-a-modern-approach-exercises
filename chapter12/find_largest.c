#include <stdio.h>

#define N 10

int *find_largest(int *a, int n)
{
    int *i;
    int *largest = a;
    for (i = a; i < a + N; i++)
    {
        if(*largest < *i) 
        {
            largest = i;
        }
    }
    return largest;
}

int main(void)
{
    int all[N] = {20, 30, 35, 56, 51, 18, 12, 21, 56, 32};
    
    int *largest = find_largest(all, N);
    
    printf("largest is %d\n", *largest);
    
    return 0;
}
