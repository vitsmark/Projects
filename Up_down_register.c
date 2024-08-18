#include <stdio.h>
#include <string.h>
#include <ctype.h>
// User enter as a second argument mode:
// p - doesn't change anything, u - changes all alphabetic characters to Uppercase, l - changes all alphabetic characters to Lowercase.  
int main(int argc, char *argv[])
{
    char a;

    if (argc < 2)
    {
        while((a = getchar()) != EOF)
        putchar(a);
    }
    else
    while((a = getchar()) != EOF)
    {
        if (argv[1][1] == 'p')
            putchar(a);
        else if (argv[1][1] == 'u')
            putchar(toupper(a));
        else if (argv[1][1] == 'l')
            putchar(tolower(a));
        

    }
    return 0;
}