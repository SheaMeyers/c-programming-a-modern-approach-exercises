#include <stdio.h>

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main(void)
{
    int i = 2;
    int j = 3;
    
    
    printf("i is %d\n", i);
    printf("j is %d\n", j);
    
    swap(&i, &j);

    printf("i is %d\n", i);
    printf("j is %d\n", j);
    
    return 0;
}
