// 13) Write a program to find the largest amount three numbers.
#include<stdio.h>
int main(){
    int a, b, c;
    
        printf("Enter the value of a:");
    scanf("%i",&a);
    printf("Enter the value of b:");
    scanf("%i",&b);
    printf("Enter the value of c:");
    scanf("%i",&c);


    if (a>b && a>c)
    {
        printf("A is the largest.");
    }
    else if (b>a && b>c)
    {
        printf("B is the largest.");
    }
    else{
        printf("C is the largest.");
    }
    
    
    return 0;
}