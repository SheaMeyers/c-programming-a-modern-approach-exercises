#include <stdio.h>
#include <stdbool.h>

#define NUM_ROWS 7
#define NUM_COLS 24

const int *find_largest(const int *a)
{
    const int *i;
    const int *largest = a;
    for (i = a; i < a + NUM_COLS; i++)
    {
        if(*largest < *i) 
        {
            largest = i;
        }
    }
    return largest;
}

void print_highest_value_in_row(const int a[NUM_ROWS][NUM_COLS])
{
    for (int i = 0; i < NUM_ROWS; i++) {
        const int *largest = find_largest(a[i]);
        printf("%d\n", *largest);
    }
}

int main(void)
{
    int tempuratures[NUM_ROWS][NUM_COLS] = { 
        { 8, 24, 7, 23, 26, 22, 27, 28, 17, 14, 8, 0, 1, 5, 21, 20, 6, 26, 24, 4, 27, 15, 28, 9 }, 
        { 27, 25, 13, 9, 7, 26, 8, 2, 19, 18, 3, 15, 6, 4, 18, 15, 23, 0, 25, 11, 21, 1, 8, 21 }, 
        { 8, 14, 5, 15, 26, 10, 0, 0, 2, 5, 29, 28, 16, 30, 1, 20, 16, 27, 0, 4, 13, 19, 24, 4 }, 
        { 15, 5, 15, 13, 18, 13, 19, 5, 4, 26, 23, 16, 1, 16, 30, 29, 11, 19, 12, 25, 6, 25, 7, 14 }, 
        { 2, 13, 15, 26, 16, 8, 17, 17, 16, 1, 15, 32, 17, 0, 23, 14, 1, 0, 18, 8, 5, 23, 18, 3 }, 
        { 8, 21, 14, 20, 16, 8, 28, 21, 30, 21, 13, 15, 18, 8, 16, 22, 6, 20, 4, 3, 6, 28, 5, 5 }, 
        { 8, 14, 28, 0, 26, 14, 5, 4, 29, 20, 25, 13, 29, 9, 21, 10, 22, 18, 11, 30, 20, 17, 7, 15 }, 
    };

    print_highest_value_in_row(tempuratures);

    return 0;
}
