// 21) Write a program to accept the height of a person in centimeter and categorize the person according to their height if below 150 he is dwarf if above 150 and below 200 average and above 200 tall. 
#include<stdio.h>
    
int main()
{
    int height;
    printf("Enter the height : ");
    scanf("%i",&height);

    if (height<150)
    {
        printf("Dwarf gay (Chotu 2 chai lana)");
    }
    else if (height<200)
    {
        printf("Average gay");
    }
    else
    {
        printf("Tall gay (Lambu ji)");
    }
    
    
    
    return 0;
}