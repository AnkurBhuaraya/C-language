// 10) Write a program to calculate a bikes average consumption from the given total distance (integer value) travel (in Km)and spent fuel (in liters, float number-2 decimal points).
#include<stdio.h>
int main(){
    float a, b;
    printf("Enter total distance(in km): ");
    scanf("%f",&a);
    printf("Enter fule spent(in liters): ");
    scanf("%f",&b);
    float ave= a/b;
    printf("Bike's average consumption %.2f Km/l", ave);
    return 0;
}