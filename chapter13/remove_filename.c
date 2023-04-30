#include <stdio.h>
#include <string.h>


void remove_filename(char *url)
{
    char *p = url;
    while (*url) {
        if (*url == '/')
            p = url;
        url++;
    }
    *p = '\0';

}

int main(void)
{
    char url[32] = "http://www.knking.com/index.html";

    remove_filename(url);

    printf("Result is: %s\n", url);
    
    return 0;
}
