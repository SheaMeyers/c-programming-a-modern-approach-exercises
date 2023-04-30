#include <stdio.h>
#include <string.h>
#include <ctype.h>


void get_extension(const char *file_name, char *extension)
{
    while (*file_name) {
        if (*file_name++ == '.') {
            strcpy(extension, file_name);
            return;
        }
    }

    strcpy(extension, "");
}

int main(void)
{
    const char *file_name = "memo.txt";
    char extension[sizeof(file_name)];

    get_extension(file_name, extension);

    printf("Extension is: %s\n", extension);
    
    return 0;
}
