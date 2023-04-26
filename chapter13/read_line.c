#include <stdio.h>
#include <string.h>
#include <ctype.h>

int read_line(char str[], int n)
{
    int ch, i = 0;
    
    while((ch = getchar())) {
        if (ch == '\n') {
            str[i++] = ch;
            break;
        }

        if (i == 0 && isspace(ch) != 0) {
            continue;
        } else if (isspace(ch) != 0 ) {
            break;
        }

        if (i < n) {
            str[i++] = ch;
        }
    } 
    
    str[i] = '\0';
    return i;
}

int main(void)
{
    int string_length = 10;

    char input[string_length];

    int input_length = read_line(input, string_length);

    printf("Input contains: %s\n", input);
    printf("String length: %d\n", input_length);
    
    return 0;
}
