// 9 A) Accept two number from user and swap their values.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%i",&a);
    printf("Enter the value of b: ");
    scanf("%i",&b);
    c=a, a=b, b=c;
    printf("After swapping with 3rd variable\n value of a: %i \n value of b: %i", a, b);
    return 0;
}