#include <stdio.h>
#include <stdlib.h>


int *create_arry(int n, int initial_value) {
    int *arr = (int *) malloc(n);
    if (arr == NULL) {
        return NULL;
    }
    
    for (int *i = arr; i < arr + 10; i++) {
        *i = initial_value;
    }

    return arr;
}


int main(void)
{
    int *arr = create_arry(10, 3);

    for (int *i = arr; i < arr + 10; i++) {
        printf("%i", *i);
    }

    return 0;
}
