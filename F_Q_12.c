// 12) Write a program to find whether a given year is a leave beer or not.
// year/400 -> leap year
// year/100 -> not a leap year
// year/4 -> leap year
// year -> not a leap year
#include<stdio.h>
int main(){
    int year;
    printf("Enter the year: ");
    scanf("%i",&year);

    if (year/400==0) printf("leap year");
    else if (year/100==0) printf("not aleap year");
    else if (year/4) printf("leap year");
    else printf("not aleap year");

    // if (year%4==0)
    // {
    //     printf("%i is a leap year.",year);
    // }
    
    // else{
    //     printf("%i is not a leap year.",year);
    // }
    
    return 0;
}