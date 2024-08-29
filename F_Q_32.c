// 32 ) Write a program to check whether a number is a palindrome or not
#include<stdio.h>
    
int main()
{
    int num, sum = 0, n, pa;
    printf("Enter a number :");
    scanf("%i",&num);

    n = num;
    while(num > 0)
    {
        pa =  num%10;
        num = num/10;
        sum = sum*10 + pa;
    }

    if (sum == n) printf("Yes its a palindromic number");
    else printf("Not a palindromic number");
    
    return 0;
}