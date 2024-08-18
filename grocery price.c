#include <stdio.h>
#include <stdlib.h>
// Program counts price of your groceries including possible discount and 
//then displays detailed information about your purchase.
#define ART 2.05f
#define BUR 1.15f
#define CARROT 1.09f

int main (void)
{
    float art_am = 0;
    float bur_am = 0;
    float carrot_am = 0;
    float add;
    char choice;
    float weight;
    float total, sum;
    int discount = 1;
    float delivery = 0;
    printf("a = artishok, b = buryak, c = carrot, q = quit\n");
    while (1)
    {   
        scanf("%c", &choice);
        if (choice == '\n')
            continue;
            
        
        
        
        
        if (choice == 'q')
            break;
        
        
        switch (choice)
        {
        case 'a':
            {
                printf("Enter amount of kilograms: \n");
                scanf("%f", &add);

                art_am += add;
                break;
            }
        case 'b':
            {
                printf("Enter amount of kilograms: \n");
                scanf("%f", &add);
                bur_am += add;
                break;
            }
        case 'c':
            {
                printf("Enter amount of kilograms: \n");
                scanf("%f", &add);
                carrot_am += add;
                break;
            }
        default :
            printf("Choose available option.\n");
            break;
        }
        
        printf("a = artishok, b = buryak, c = carrot, q = quit\n");
    }
        sum = art_am * ART + bur_am * BUR + carrot_am * CARROT;
        weight = art_am + bur_am + carrot_am;
        if (sum >= 100)
        {
            sum *= 0,95;
            discount = 1;
        }
        if (weight > 0)
        {
        if (weight <= 5)
            delivery = 6.50;
        else if (5 <= weight && weight <= 20 )
            delivery = 14;
        else
            delivery = 14 + (weight - 20) * 0,5;
        }
        total = sum + delivery;
        printf("Your purchase: \n");
        if (art_am > 0)
            printf("Cost of kilo of artishoks is %.2f.\n", ART);
            printf("You ordered %.2f kilo(s).\n", art_am);
            printf("total for artishoks is %.2f.\n", art_am * ART);
        if (bur_am > 0)
            printf("Cost of kilo of burs is %.2f.\n", BUR);
            printf("You ordered %.2f kilo(s).\n", bur_am);
            printf("total for burs is %.2f.\n", bur_am * BUR);
        if (carrot_am > 0)
            printf("Cost of kilo of burs is %.2f.\n", CARROT);
            printf("You ordered %.2f kilo(s).\n", carrot_am);
            printf("total for burs is %.2f.\n", carrot_am * CARROT);
        printf("Your total is %.2f.\n", sum);
        if (discount = 1)
            printf("You discout is %.2f.\n", sum * 0.05);
        printf("Your delivery cost is %.2f.\n", delivery);
        printf("Your total with delivery is %.2f.\n", total);
        
    return 0;
    
}