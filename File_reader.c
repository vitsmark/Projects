#include <stdio.h>
#include <stdlib.h>
// User enters character and file to read from and program counts how many times entered character occurs in a file.
// If no arguments entered program just reads from stdin.
int main(int argc, char **argv)
{
    char ch;
    FILE *fp;
    int ct = 0;
    if(argc >2)
        for (int j = 2; j < argc; j++)
        {
            ct = 0;
            if ((fp = fopen(argv[j], "r")) == NULL)
            {
                printf("cant open file");
                exit(EXIT_FAILURE);
            }
            while((ch = getc(fp)) != EOF)
        {
            if (ch == argv[1][0])
                ct++;
            if (ferror(fp))
            {
                printf("Error occureed with %s.\n", argv[j]);
            }
            
            
        }
        printf("%s has %d copies of %c.\n", argv[j], ct, argv[1][0]);
        }
        
    else if (argc == 2)
    {
        while((ch = getchar()) != EOF)
        {
            if (ch == argv[1][0])
                ct++;
        }
        printf("There are %d copies of %c.\n", ct, argv[1][0]);
    }

    fclose(fp);

    

    return 0;
        



}