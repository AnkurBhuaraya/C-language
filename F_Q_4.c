// 4) Write a program to find the area of Triangle given base and height.
#include<stdio.h>
int main(){
    int h,b;
    printf("Enter the height of triangle :");
    scanf("%i",&h);
    printf("Enter the base of triangle :");
    scanf("%i",&b);
    float total =(float).5*b*h;
    printf("Perimeter of the triangle is %.f square unit.", total);
    return 0;
}