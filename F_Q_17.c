// 17) Write a program to input cost price and selling price of a product and check profit or loss
#include<stdio.h>
    
int main()
{
    int cp, sp, total;
    printf("Enter the cost price: ");
    scanf("%i",&cp);
    printf("Enter the selling price: ");
    scanf("%i",&sp);

    total= sp - cp;

    if (total > 0)
    {
       printf("Profit of %i", total);
    }
    else
    {
        printf("Loss of %i", total);
    }
    
    return 0;
}