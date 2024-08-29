// 2) Write a program that prints the perimeter of a rectangle to take its height and width as input.
#include<stdio.h>
int main(){
    int h,w;
    printf("Enter the height of rectangle :");
    scanf("%i",&h);
    printf("Enter the width of rectangle :");
    scanf("%i",&w);
    int total =2*(h+w);
    printf("Perimeter of the rectangle is %i", total);
    return 0;
}