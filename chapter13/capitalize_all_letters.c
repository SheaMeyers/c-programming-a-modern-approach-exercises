#include <stdio.h>
#include <string.h>
#include <ctype.h>


void capitalize_all_letters(char *str)
{
    char *i = str;
    
    while (*i != '\0') {
        *i = toupper(*i);
        i++;
    }
}

int main(void)
{
    char input[] = "abc83ef7T";

    printf("Initial input: %s\n", input);

    capitalize_all_letters(input);

    printf("Modified input: %s\n", input);
    
    return 0;
}
