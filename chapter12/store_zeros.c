#include <stdio.h>

#define N 10

void store_zeros(int *a, int n)
{
    int *i;

    for (i = a; *i < n; i++) {
        *i = 0;
    }
}

void print_array_elements(const int a[]) 
{
    for (int i = 0; i < N; i++) {
        printf("Index %d has value %d\n", i, a[i]);
    }
}

int main(void)
{
    int the_array[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    print_array_elements(the_array);
    printf("Storing zeros\n");
    store_zeros(the_array, N);
    print_array_elements(the_array);

    return 0;
}
