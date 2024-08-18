#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// simulates dice roll. 
int roll_count = 0;
static int rollem(int sides);
int roll_n_dice(int dice, int sides, int toses);
int main(void)
{
    int dice, roll;
    int sides, status;
    int toses;
    srand((unsigned int) time(0));

    printf("Enter number of toses or 0 to quit.\n");
    while(scanf("%d", &toses) == 1 && toses > 0)
    {
        printf("Enter number of sides or 0 to quit.\n");
        scanf("%d", &sides);
        printf("How many dices\n");
        if ((status = scanf("%d", &dice)) != 1)
        {
            if(status == EOF)
                break;
            else
            {
                printf("You have to enter integer.");
                printf("Let's try again.\n");
                while(getchar() != '\n')
                    continue;
                printf("How many dices?\n");
                continue;
            }
            
        }
        roll = roll_n_dice(dice, sides, toses);
        printf("Enter number of toses or 0 to quit.\n");
        //printf("Enter number of sides or 0 to quit.\n");
    }
    printf("Function rollem() was called %d times.\n",
        roll_count);
    printf("See u soon!");

    return 0;

}




static int rollem(int sides)
{
    int roll;
    roll = rand() % sides +1;
    ++roll_count;

    return  roll;
}

int roll_n_dice(int dice, int sides, int toses)
{
    int d;
    if(sides < 2)
    {
        printf("Needed at least 2 sides.\n");
        return -2;
    }
    if(dice < 1)
    {
        printf("Needed at least 1 dice.\n");
        return -1;
    }
    printf("You threw %d times, using %d dice(s) with %d sides.\n",
            toses, dice, sides);
    for(int i = 0; i < toses; i++)
    {
        int total = 0;
    for(d = 0; d < dice; d++)
    {
        total += rollem(sides);
        
    }
        printf("%d ", total);
    }
    printf("\n");

    return d;
}