//6) Write a program that converts kilometer per hour to Miles per hour.
#include<stdio.h>
int main(){
    int Kmph;
    printf("Enter speed in Kmph :");
    scanf("%i", &Kmph);
    float Mph = (float)Kmph*0.621371;
    printf("Speed in Mph is %.4f",Mph);
    return 0;
}