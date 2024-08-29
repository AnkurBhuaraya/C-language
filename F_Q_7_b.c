// 7 B) Write a program  That takes minutes as input and display the total numbers of hours a minute.
#include<stdio.h>
int main(){
    int min;
    printf("Enter Min :");
    scanf("%i",&min);
    int h=min/60;
    int m=min%60;
    printf("Total Hours: %i hours and %i minutes", h, m);
    return 0;
}