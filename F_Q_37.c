// 37 ) Write a program to check whether a given number is an Armstrong number or not .
#include<stdio.h>
    
int main()
{
    int n, sum = 0 ;

    printf("Enter a number");
    scanf("%i",&n);

    int copy = n;
    
    while (n>0)
    {
        int rem = n%10;
        sum =sum + rem*rem*rem;
        n = n / 10;
    }

    if( copy==sum )printf("Yes it's a Armstrong number.");
    else printf("No it's not Armstrong number.");
    
    
    return 0;
}