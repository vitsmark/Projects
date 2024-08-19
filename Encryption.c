#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Program asks if user want to use current encryption set or user will enter his own. 
//Then it subtitute first letter of alphabet with first letter in encryption set and so on. Displays as the result encrypted message.  
int main (void)
{
    char ch[27] = "NQXPOMAFTRHLZGECYJIUWSKDVB"; // encryption array
    char m[25];
    int ans;
    int len;


    
        
    printf("Enter your massage: ");
    
    
    while (scanf("%26s", m) != 0)
    {



        printf("do you want to use current encription set?(enter 1 as yes):");
        scanf("%d", &ans);

        if(ans != 1)
        {
            printf("Enter 26 letters:");
            scanf("%26s", ch);
        }

        len = strlen(m);
    for(int i = 0; i < len; i++)
    {
        if (isupper(m[i]))
        {
            for (int j = 0; j < 26; j++)
            {
                if (m[i] == 'A' + j)
                    putchar(toupper(ch[j]));
            }
        }
        else
        {
            for (int j = 0; j < 26; j++)
            {
                if (m[i] == 'a' + j)
                    putchar(tolower(ch[j]));
            }
        }
    }  

        printf("\nEnter your massage: ");   
    }
}
    
    

