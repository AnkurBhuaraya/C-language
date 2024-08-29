// 3) Write a program to compute the perimeter and area of a circle with a given radius.
#include<stdio.h>
int main(){
    int r;
    printf("Enter the radius of circle :");
    scanf("%i",&r);
    float area=(float)3.14*r*r;
    float perimeter=(float)2*3.14*r;
    printf("Perimeter of the circle is %.2f\n", perimeter );
    printf("area of the circle is %.2f square unit", area);
    return 0;
}