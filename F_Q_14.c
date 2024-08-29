    // 14) Write a  program to check whether a given integer is positive or negative and also check whether the given integer is even or odd .
#include<stdio.h>
    
int main()
{
    int interger;
    printf("Emter the value of interger : ");
    scanf("%i",&interger);

    if(interger%2==0 && interger>=0)
    {
        printf("Positive and Even");
    }
    else if (interger%2!=0 && interger>=0)
    {
        printf("Positive and Odd");
    }
    else if(interger%2==0 && interger<=0)
    {
        printf("Negative and Even");
    }
    else if (interger%2!=0 && interger<=0)
    {
        printf("Negative and Odd");
    }
    else
    {
        printf("Error");
    }
    
    
    return 0;
}