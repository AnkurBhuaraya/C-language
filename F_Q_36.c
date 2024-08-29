// 36 ) Write a program to check whether a given number is a 'Perfect' number or not .
#include<stdio.h>
    
int main()
{
    int num, sum=0 ;
    
    printf("Enter a number: ");
    scanf("%i",&num);

    int copy=num;
    for (int i = 1; i < num; i++)
    {
        if (num % i ==0 )sum += i;
    }
    
    if (sum == copy) printf("Yes it is a perfect Number.");    
    else printf("No it is not a perfect Number.");    
    
    return 0;
}