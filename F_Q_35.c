// 35 ) Write a program to check whether a givennumber is a 'Harshad' number or not .
#include<stdio.h>
    
int main()
{
    int num, sum = 0, rem;
    printf("Enter a number : ");
    scanf("%i",&num);
    int copy = num;

    while (num > 0)
    {
        rem = num%10;
        sum += rem;
        num = num/10;
    }
    if (copy%sum == 0)
    {
        printf("Yes it is a Harshad Number");
    }
    else printf("Not a Harshad Number");
    
    
    return 0;
}