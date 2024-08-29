// 5) Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main(){
    float c;
    printf("Enter the temperature in celsius :");
    scanf("%f", &c);
    float temp=(c*9/5)+32;
    printf("Temperature in Fahrenheit is %.2f", temp);
    return 0;
}