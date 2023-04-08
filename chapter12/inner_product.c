#include <stdio.h>

#define N 10

double inner_product(const double *a, const double *b, int n)
{
    const double *i, *j;
    double sum = 0.0;

    for (i = a, j = b; *i < n; i++) {
        sum += *i * *j;
    }

    return sum;
}


int main(void)
{
    double a[N] = {1.1, 2.1, 3.1, 4.1, 5.1, 6.1, 7.1, 8.1, 9.1};
    double b[N] = {10.1, 20.1, 30.1, 40.1, 50.1, 60.1, 70.1, 80.1, 90.1};
    
    double sum = inner_product(a, b, N);

    printf("The inner product is %f\n", sum);

    return 0;
}
