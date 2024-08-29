// 28 ) Write a program to print the sum of all even & odd numbers separately up to n term .
#include<stdio.h>
    
int main()
{
    int n, i, sum_odd=0, sum_even=0;
    printf("Enter the value of n : ");
    scanf("%i",&n);

    for ( i=1 ; i<=n ; i++ )
    {
        if (i%2==0)
        {
            sum_even += i;
        }
        else 
        {
            sum_odd += i;
        }        
    }

    printf("Sum of even number up to %i : %i\n",n,sum_even);
    printf("Sum of odd number up to %i : %i",n,sum_odd);
    
    
    return 0;
}