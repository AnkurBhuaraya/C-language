// 26 ) Write a program to print the sum of all factors of a number 
#include<stdio.h>
    
int main()
{
    int num, i, total=0;

    printf("Enter a number : ");
    scanf("%i",&num);


    if (num <=0 )
    {
        printf("Invalide input.");
        return 1;
    }
    
    else
    {
        printf("Factors of %i are :",num);
        for ( i = 1; i <= num; i++)
        {
            if (num%i==0)
            {
                printf("%i ",i);
                total += i;
            }
            
        }
        printf("\nSum of factors : %i",total);

       return 0;
    }
}