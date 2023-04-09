#include <stdio.h>
#include <stdbool.h>

#define NUM_ROWS 7
#define NUM_COLS 24

bool is_key_in_array(const int a[NUM_ROWS][NUM_COLS], int key)
{
    for (const int *p = &a[0][0]; p <= &a[NUM_ROWS-1][NUM_COLS-1]; p++){
        if (*p == key) {
            return true;
        }
    }
    return false;
}

int main(void)
{
    int tempuratures[NUM_ROWS][NUM_COLS] = { 
        { 8, 24, 7, 23, 26, 22, 27, 29, 17, 14, 8, 0, 1, 5, 21, 20, 6, 26, 24, 4, 27, 15, 29, 9 }, 
        { 29, 28, 13, 9, 7, 28, 8, 2, 19, 18, 3, 15, 6, 4, 18, 15, 28, 0, 25, 11, 21, 1, 8, 21 }, 
        { 8, 14, 5, 15, 26, 10, 0, 0, 2, 5, 29, 28, 16, 30, 1, 20, 16, 27, 0, 4, 13, 19, 24, 4 }, 
        { 15, 5, 15, 13, 18, 13, 19, 5, 4, 26, 23, 16, 1, 16, 30, 29, 11, 19, 12, 25, 6, 25, 7, 14 }, 
        { 2, 13, 15, 26, 16, 8, 17, 17, 16, 1, 15, 32, 17, 0, 23, 14, 1, 0, 18, 8, 5, 23, 18, 3 }, 
        { 8, 21, 14, 20, 16, 8, 28, 21, 30, 21, 13, 15, 18, 8, 16, 22, 6, 20, 4, 3, 6, 28, 5, 5 }, 
        { 8, 14, 28, 0, 26, 14, 5, 4, 29, 20, 25, 13, 29, 9, 21, 10, 22, 18, 11, 30, 20, 17, 7, 15 }, 
    };

    int key = 32;

    bool is_in_array = is_key_in_array(tempuratures, 32);
    
    
    printf("Is %d in array? %s\n", key, is_in_array ? "yes" : "no");
    
    return 0;
}
