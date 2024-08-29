// 11) Write a program to accept two integers and check whether they are equal or not.
#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the 1st integer: ");
    scanf("%i",&a);
    printf("Enter the 2nd integer: ");
    scanf("%i",&b);
    if (a=b)
    {
        printf("The two integers are equal.");
    }
    else
    {
        printf("The two integers are not equal.");
    }
    return 0;
}