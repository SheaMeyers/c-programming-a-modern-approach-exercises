#include <stdio.h>

#define N 10

int sum_array(int *a, int n)
{
    int *i, sum;

    sum = 0;
    for (i = a; i < a + n; i++) {
        sum += *i;
    }
    return sum;
}

int main(void)
{
    int the_array[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum;
    
    sum = sum_array(the_array, N);
    
    printf("sum is %d\n", sum);
    
    return 0;
}
