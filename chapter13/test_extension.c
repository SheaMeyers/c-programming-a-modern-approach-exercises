#include <stdio.h>
#include <string.h>
#include <stdbool.h>


bool test_extension(const char *file_name, const char *extension)
{
    while (*file_name++ != '.')
        ;
    
    while (*file_name && *extension)
        if (toupper(*file_name++) != toupper(*extension++))
            return false;
    
    return true;
}

int main(void)
{
    const char *domain_name = "memo.txt";
    const char *extension = "TXT";

    bool result = test_extension(domain_name, extension);

    printf("Result is: %d\n", result);
    
    return 0;
}
