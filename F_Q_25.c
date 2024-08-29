// 25 ) Write a program to  find the sum and average up to nth term
#include<stdio.h>
    
int main()
{
    int n, i, sum=0;
    float avg;

    printf("Enter the value of n : ");
    scanf("%i",&n);

    for ( i = 1; i <=n ; i++)
    {
        sum = sum + i;
    }

    avg= (float)sum/n;
    
    printf("sum is %i & Average is %.2f.",sum ,avg);
    
    return 0;
}
