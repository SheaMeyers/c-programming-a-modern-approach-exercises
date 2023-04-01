#include <stdio.h>

#define N 10

int *find_largest(int a[], int n)
{
    int largestIndex = 0;
    for (int i = 1; i < N; i++)
    {
        if(a[largestIndex] < a[i]) 
        {
            largestIndex = i;
        }
    }
    return &a[largestIndex];
}

int main(void)
{
    int all[N] = {20, 30, 35, 56, 51, 18, 12, 21, 56, 72};
    
    int *largest = find_largest(all, N);
    
    printf("largest is %d\n", *largest);
    
    return 0;
}
