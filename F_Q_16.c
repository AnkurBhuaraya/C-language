// 16)  Accept marks of 4 subjects and calculate percentage if percentage is below 35% - F,below 45% - D,below 55% - C,below 75% - B, above 75% - A.
#include<stdio.h>
    
int main(){
    int e, h, m, s, percentage;
    printf("Enter the mark of mathematics: ");
    scanf("%i",&m);
    printf("Enter the mark of science: ");
    scanf("%i",&s);
    printf("Enter the mark of english: ");
    scanf("%i",&e);
    printf("Enter the mark of hindi: ");
    scanf("%i",&h);

    percentage = (m + s + e + h) / 4;

    char Grade;

    if (percentage >= 75)
    {
        Grade = 'A';
    }
    else if (percentage >= 55)
    {
        Grade = 'B';
    }
    else if (percentage >= 45)
    {
        Grade = 'C';
    }
    else if (percentage >= 35)
    {
        Grade = 'D';
    }
    else
    {
        Grade = 'F';
    }

    printf("Grade: %c", Grade);

    return 0;
}
