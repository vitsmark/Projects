#include <stdio.h>
// Calculator
int main(void)
{
    float first, second;
    float result;
    char entered;
    printf("Choose operations:\n");
    printf("A)add   B)substruct\n");
    printf("C)multiply   D)division\n");
    printf("q)quit\n");
    scanf("%c", &entered);

    while (1)
    {   // function
        char ch;
        if (entered >= 'A' && entered <= 'D')
        {
        printf("Enter first value: ");
        while (scanf("%f", &first) != 1)
        {
            while ((ch = getchar()) != '\n')
                putchar(ch);
                printf(" is not a value.\n");
                printf(" Entered something like 2.5, -1.78E8 or 3: ");
            // function end
        }
        
        
        printf("Enter second value: ");
        while (scanf("%f", &second) != 1)
        {
            while ((ch = getchar()) != '\n')
                putchar(ch);
                printf(" is not a value.\n");
                printf(" Entered something like 2.5, -1.78E8 or 3: ");
        }
        while (entered == 'D' && second == 0)
        {
            printf("Enter number except 0: ");
            while (scanf("%f", &second) != 1)
            {
                while ((ch = getchar()) != '\n')
                    putchar(ch);
                printf(" is not a value.\n");
                printf(" Entered something like 2.5, -1.78E8 or 3: ");
            }
        }
        
        
            switch (entered)
            {
            case 'A':{
                printf("%.1f + %.1f = %.1f\n", (float)first, (float)second, first + (float)second);
                break;}
            case 'B':{
                printf("%.1f - %.1f = %.1f\n", (float)first, (float)second, first - (float)second);
                break;}
            case 'C':{
                printf("%.1f * %.1f = %.1f\n", (float)first, (float)second, (float)first * (float)second);
                break;}
            case 'D':
            {
                printf("%.1f / %.1f = %.1f\n", (float)first, (float)second, (float)first / (float)second);
                break;    
            }
            }
        
        }
        else if (entered <= 'A' && entered >= 'D')
        {
            printf("Choose valid option.\n");
            continue;
        }
        else if (entered == 'q')
            break;
        printf("Choose operations:\n");
        printf("A)add   B)substruct\n");
        printf("C)multiply   D)division\n");
        printf("q)quit\n");
        while (getchar() != '\n')
        {
            continue;
        }
        
        scanf("%c", &entered);
    }
    printf("Program is down.\n");
    return 0;
}
        





