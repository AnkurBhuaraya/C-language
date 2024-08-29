// 23) Write a program to print natural numbers up to n. 

#include<stdio.h>
    
int main()
{
    int n, i;
    printf("Enter the value of n : ");
    scanf("%i",&n);

    for(i = 1; i <= n; i++)
    {
        printf("%i ",i);
    }
    
    
    return 0;
}