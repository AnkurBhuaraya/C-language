// 27 ) Write a program to print the power of a raisedto the power of b .
#include<stdio.h>
#include<math.h>
    
int main()
{
    int base, exponent, ans;

    printf("Enter the base (a) : ");
    scanf("%i",&base);
    printf("Enter the exponent (b) : ");
    scanf("%i",&exponent);

    ans = pow(base,exponent);

    printf("%i raised to the the power of %i is %i",base,exponent,ans);
    
    return 0;
}