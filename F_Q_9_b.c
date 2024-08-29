// 9 B) Accept two numbers from user and swap their values without using 3rd variable.
#include<stdio.h>
int main(){
    int a,b;
printf("Enter the value of a : ");
scanf("%i",&a);    
printf("Enter the value of b : ");
scanf("%i",&b);

    //\n \t \a konsa group sa hay ya inka group ko kya kahata hai ,13 types ka ho ta hai.
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swapping\nValue os a : %i\nValue os b : %i", a, b);
    return 0;
}