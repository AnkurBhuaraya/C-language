// 40 )Write a program to print positive and negative elements of an array separately .#include<stdio.h>   
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n (size of array) : ");
    scanf("%i",&n);

    int arr[n];
    printf("Enter the elements of array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%i",&arr[i]);
    }

    printf("Positive Element : ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i]/1 > 0) printf("%i ",arr[i]);
    }
    printf("\n");
    
    printf("Negative Element : ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i]/1 < 0) printf("%i ",arr[i]);
    }
    
    
    return 0;
}