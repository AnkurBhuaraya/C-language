// 30 ) Write a program to sum Of digits Of a number .
#include<stdio.h>
    
int main()
{
    int num, sum=0, rem;
    printf("Enter the number : ");
    scanf("%i",&num);

    while (num > 0)
    {
        rem = num%10;
        sum += rem;
        num /= 10;
    }
    
    printf("Sum is %i",sum);
    
    return 0;
}