#include <stdio.h>
#include <string.h> 
#include <ctype.h>
#include <stdlib.h>
// Program check if the card number you've entered is valid if so it prints its bank.


int main(void)
{  
   char numbers[16];
   int number[16];
   int mass[8];
   int length;
   int a, b;
   int sum1=0, sum2=0;
   char ans;
   int result;
   printf("Do you want to check number?(y/n)\n");
   scanf("%c", &ans);
   while(ans == 'y'){
      printf("Enter number of card:");
      scanf("%s", numbers);
      for( int i = 0; i < 16; i++ ){
         if (isdigit(numbers[i]))
         {
            number[i] = numbers[i] - 48;
         }
         else
         {
            printf("Don't enter non numeric values.");
            exit(EXIT_FAILURE);
         }
      
      
   }
   
   for (int k = 0, i = 0; k < 16; k+= 2, i++)
   {
      mass[i] = number[k] * 2;
      
      if (mass[i] > 9){
         a = mass[i] % 10;
         b = mass[i] / 10;
         mass[i] = a+b;   
      }
      sum1 += mass[i];
   }
   
   for(int i = 1; i < 16; i+= 2){
      sum2 += number[i];

   }
   result = (sum1 + sum2);
   
   
   

   if(result %10 == 0){
      printf("Your card is valid.\n");
   if (number[0] == 5){
         
         printf("Bank: Master\n");
      }
   else if (number[0] == 4){
         printf("Bank: Visa\n");
      }
   else if (number[0] == 3)
      {
         printf("Bank: American\n");
      }
   }  
   else
      printf("Invalid\n");

   
   printf("Do you want to check number?\n");
   scanf("%c", &ans);
   }
   
   return 0;
}