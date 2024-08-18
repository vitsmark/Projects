#include <stdio.h>
#include <ctype.h>
// Analog of function atoi(). Returns 0 if encounters non-numeric sign.
int toi(char *st);
int main(void)
{
    int a = '1';
    int b;
    char s[] = "145b";
    b = toi(s);
    printf("%d", b);
}

int toi(char *st)
{   
    int i = 0;
    while(*st != '\0')
    {
        if (isdigit(*st))
        {
            i = i*10 + (*st - 48);
            st++;
        }
        else
            return 0;

    }
    return i;
}