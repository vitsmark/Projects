#include <stdio.h>
// At first user adjust variable length array and then enters sets of numbers. 
//Program displays total of each set and sum of all sets and the biggest value in all sets.
void save(int i, int q, double ari[i][q]);
double average(int i, int q, double ari[i][q]);
double all(int i, int q, double ari[i][q]);
double max(int i, int q, double ari[i][q]);
void results(int i, int q, double ari[i][q]);
int main(void)
{
    int a, b; 
    printf("Enter two values to adjust two-dimensional array:\n");
    scanf("%d%d", &a,&b);
    double array[a][b];
    double av1,av2,av3;

    results(a, b,array);

}

void save(int i, int q, double ar[i][q])
{
    printf("Enter %d sets of %d doubles.\n", i, q);
    for(int j = 0; j < i; j++)
        for(int a=0; a< q; a++)
        {
            scanf("%lf", &ar[j][a]);
        }
            
}

double average(int i, int q, double ar[i][q])
{
    double total = 0;
    static int ct =1;
    for(int j =0; j < q; j++)
        total += ar[i][j];
    printf("Total of set %d: %lf\n",ct, total);
    ct++;
    return total;

}

double all(int i, int q, double ar[i][q])
{

    double total = 0;
    for(int a =0; a < i; a++)
        for(int j =0; j < q; j++)
        total +=ar[a][j];
    return total;        

}

double max(int i, int q, double ar[i][q])
{
    int max =0;
    for(int a =0; a < i; a++)
        for(int j =0; j <  q; j++)
            if (max < ar[a][j])
                max = ar[a][j];
    return max;

}

void results(int i, int q, double ar[i][q])
{
    int c = 0;
    save(i,q,ar);
    printf("\n");
    
    while(c <i)
    {
        average(c,q,ar);
        c++;
    }
    printf("Total of all sets: %lf\n", all(i,q,ar));
    printf("The biggest value in all sets: %lf\n", max(i,q,ar));

}