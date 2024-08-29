// 34 ) Write a program to find the sum of the series 1 + 11 + 111 + 1111 + .. n terms annd print it series to .

#include<stdio.h>
#include<math.h>
    
int main()
{
    int i, n, pre, sum = 0;
    printf("Enter the value of n : ");
    scanf("%i",&n);

    for ( i = 0; i < n ; i++)
    {
        pre= pow(10,i)+pre;
        sum += pre;
        printf("%i ",pre);
    }

    printf("= %i",sum);    
    
    return 0;
}