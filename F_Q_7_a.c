// 7 A) Write a program that takes hour and minutes as input and calculate the total number of minutes.
#include<stdio.h>
int main(){
    int  h, m;
    printf("Enter Hours :");
    scanf("%i",&h);
    printf("Enter Min :");
    scanf("%i",&m);
    printf("Total no. of min. is %i ", h*60+m);
    return 0;
}