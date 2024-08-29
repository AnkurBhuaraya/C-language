// 32 ) Write a program to find the LCM of two numbers .
#include<stdio.h>
    
int main()
{
    int num1, num2, max;

    printf("Enter the first number : ");
    scanf("%i",&num1);
    printf("Enter the second number : ");
    scanf("%i",&num2);

    max = ( num1 > num2 ) ? num1 : num2;

    while (1)
    {
        if ((max % num1 == 0) && (max % num2 == 0))
        {
            printf("LCM of %i & %i is %i", num1, num2, max);
            break;
        }
        max++;
    }
    
    return 0;
}

