// 19) Write a program to read any day number in integer and display the day name in word format 
#include<stdio.h>
    
int main()
{
    int dayNumber;
    printf("Enter the day number (1-7): ");
    scanf("%d", &dayNumber);

    switch(dayNumber) {
    case 1:
    printf("Monday\n");
    break;
    case 2:
    printf("Tuesday\n");
    break;
    case 3:
    printf("Wednesday\n");
    break;
    case 4:
    printf("Thursday\n");
    break;
    case 5:
    printf("Friday\n");
    break;
    case 6:
    printf("Saturday\n");
    break;
    case 7:
    printf("Sunday\n");
    break;
    default:
    printf("Invalid day number! Please enter a number between 1 and 7.\n");
    }
    
    return 0;
}