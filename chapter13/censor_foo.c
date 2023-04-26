#include <stdio.h>
#include <string.h>
#include <ctype.h>


void censor_foo(char str[], int n)
{
    for (int i = 2; i < n; i++) {
        if (str[i-2] == 'f' && str[i-1] == 'o' && str[i] == 'o') {
            str[i-2] = 'x';
            str[i-1] = 'x';
            str[i] = 'x';
        }
    }
}

int main(void)
{
    char input[] = "food fool";
    int input_length = 10;

    printf("Initial input: %s\n", input);

    censor_foo(input, input_length);

    printf("Modified input: %s\n", input);
    
    return 0;
}
