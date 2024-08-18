#include <stdio.h>
// Fibonacci with for loop
void Fibonacci(int i);

int main(void)
{
    int i;
    scanf("%d", &i);
    Fibonacci(i);
    return 0;
}



void Fibonacci(int i)
{
    int x,y,z ;
    x = 0;
    y = 1;
    printf("0 ");
    for (int j = 1; j < i; j++)
    {
        y += x; 
        x= y -x;
        printf("%d ", x);
    }
    
}



