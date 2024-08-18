#include<stdio.h>
#include <string.h>
#define LIM 10
#define SIZE 20
/*Program reads up to 10 strings and depends on mode it  does: basic - displays strings in order they are now,  sortA - sorts string according to ANSI and displays sorted list,
len - prints out strings from the shortest to the longest, word - sorts strings according to the first word of the string from from the shortest to the longest.
*/
void basic(char *st[],int l);
void sortA(char *st[],int l);
void len(char *st[], int l);
void word(char *st[], int l);
char *s_gets(char *st, int n);
int main(void)
{
    char arrays[LIM][SIZE];
    char *parr[LIM];
    char a = 0;
    int ct = 0;
    printf("Enter up to ten strings or leave blanked line to submit less than 10:\n");
    while (s_gets(arrays[ct],SIZE) != NULL && arrays[ct][0] != '\0'
        && ct < LIM)
    {
        parr[ct] = arrays[ct];
        ct++;
        
    }
    while(a != 'q')
    {
        printf("Choose optiong:\n");
        printf("a)basic     b)sortA\n");
        printf("c)len       d)word\n");
        printf("q) to quit\n\n");
        a = getchar();
        switch (a)
        {
        case 'a':
            basic(parr, ct);
            break;
        case 'b':
            sortA(parr, ct);
            break;
        case 'c':
            len(parr,ct);
            break;
        case 'd':
            word(parr,ct);
            break;
        default:
            continue;
        }
        while(getchar() != '\n')
            continue;
        printf("\n");
    }
    printf("Goodbye!");
}

void basic(char *st[],int l)
{
    for(int i =0; i < l; i++)
        printf("%s\n", st[i]);
}

void sortA(char *st[],int l)
{
    char *temp;
    for(int top =0; top < l-1; top++)
    {
        for(int low = top+1; low < l; low++)
        {
            if(strcmp(st[top], st[low]) > 0)
            {
                temp = st[top];
                st[top] = st[low];
                st[low] = temp; 
            }

        }
        
    }
    for(int i =0; i <l; i++)
        printf("%s\n", st[i]);
    
}

void len(char *st[], int l)
{
    char *temp;
    for(int top =0; top < l-1; top++)
    {
        for(int low = top+1; low < l; low++)
        {
            if(strlen(st[top]) > strlen(st[low]))
            {
                temp = st[top];
                st[top] = st[low];
                st[low] = temp; 
            }

        }
    }
    for(int i =0; i <l; i++)
        printf("%s\n", st[i]);
}

void word(char *st[], int l)
{
    char *temp;
    for(int top =0; top < l-1; top++)
    {
        int a = 0;
        int s =0;
        while(st[top][s++] != ' ')
        {
            a++;
        }
        for(int low = top+1; low < l; low++)
        {   
            int b = 0;
            int c = 0;
            while(st[low][c++] != ' ')
                b++; 
            if(a > b)
            {
                temp = st[top];
                st[top] = st[low];
                st[low] = temp; 
            }

        }
    }
    for(int i =0; i <l; i++)
        printf("%s\n", st[i]);
}

char *s_gets(char *st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val) // ret_val != NULL
    {
        while (st[i] != '\n' && st[i] !='\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else // st[i] == '\0'
            while(getchar() != '\n')
                continue;
    }
    return ret_val;
}