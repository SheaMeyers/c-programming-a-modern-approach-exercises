#include <stdio.h>
#include <string.h>
#include <ctype.h>


void build_index_url(const char *domain, char *index_url)
{
    strcpy(index_url, "http://www.");
    strcat(strcat(index_url, domain), "/index.html");
}

int main(void)
{
    const char *domain_name = "knking.com";
    char index_url_name[33];

    build_index_url(domain_name, index_url_name);

    printf("Index url name is: %s\n", index_url_name);
    
    return 0;
}
