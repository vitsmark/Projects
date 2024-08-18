#include <stdio.h>
// Transform first digital value(3) into the system of second value(2) and prints the result: 11 
void to_binary(unsigned long n, int i);
int main(void)
{
    unsigned long number;
    int i;
    printf("Enter first integer,\n");
    printf("Enter second integer to transform first integer to the system of the second(q to quit):\n");
    
    while (scanf("%lu %d", &number, &i) == 2)
    {
        printf("Your integer in the system of %d: ", i);
        to_binary(number, i);
        putchar('\n');
        printf("Enter integer(q to quit):\n");
    }
    printf("Program is down.\n");
    return 0;
    
}

void to_binary(unsigned long n, int i)
{
    int r;

    r = n % i;
    if (n >= i)
        to_binary(n/i, i);
    printf("%d", r);
    return;
}