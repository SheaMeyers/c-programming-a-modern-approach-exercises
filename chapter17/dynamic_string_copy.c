#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *duplicate(char *str) {
    char *new = (char *) malloc(strlen(str) + 1);
    if (new == NULL) {
        return NULL;
    }
    strcpy(new, str);
    return new;
}


int main(void)
{
    char url[32] = "http://www.knking.com/index.html";

    char *p;

    p = duplicate(url);

    printf("Size of url %lu\n", sizeof(url));
    printf("Size of p %lu\n", sizeof(p));
    printf("Url %s\n", url);
    printf("P %s\n", p);
    
    return 0;
}
