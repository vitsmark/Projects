#include <stdio.h>
#include <ctype.h>
// Encrypts massage passed by user. User also have to choose value which will modify his letters.

int main (void)
{
    int k;
    char ch;
    unsigned char mod;
    char res;
    printf("Enter value to encrypt message:");
    while ((scanf("%d", &k)) == 1)
    {
        printf("Enter message(or ! to change your encrypt modifier):");
        while ((ch = getchar()) != '!' )
        {
            mod = ch;
            if (isalpha(ch))
            {
                mod = ch + k;
                if (islower(ch))
                while(mod > 122)
                {
                    mod  = mod - 26;
                    
                }
            else if (mod  > 90)
                while (mod > 90)
                {
                    mod  = mod - 26;
                }
            }
            
            putchar(mod);
            
        }
        printf("Enter value to add to alpha:(or q to quit)\n");
        
    }
    
    
}