#include <stdio.h>
#include <stdbool.h>

#define N 10

bool is_key_in_array(const int a[], int n, int key)
{
    const int *i;

    for (i = a; i < a + n; i++) {
        if(key == *i) {
            return true;
        }
    }
    return false;
}

int main(void)
{
    int the_array[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key = 5;
    bool is_in_array;
    
    is_in_array = is_key_in_array(the_array, N, key);
    
    printf("Is %d in array? %s\n", key, is_in_array ? "yes" : "no");
    
    return 0;
}
