// 24) Write a program to print the factorial of a number.
#include<stdio.h>
    
int main()
{
    int num, i, fact=1;
    printf("Enter a number : ");
    scanf("%i",&num);
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("Factorial is %i",fact);
    return 0;
}