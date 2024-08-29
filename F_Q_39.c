// 39 ) Write a program to accept n elements in an array and print it in normal order and in reverse order .
#include<stdio.h>
    
int main()
{
    int n;
    printf("Enter the value of n(size of array) :");
    scanf("%i",&n);

    int arr[n];
    
    printf("Enter the elements of array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%i",&arr[i]);
    }
    
    printf("Normal Order : ");
    for (int i = 0; i < n; i++)
    {
        printf("%i ",arr[i]);
    }
    printf("\n");
    
    printf("Reverse Order : ");
    for (int i = n-1; i >= 0; i--)
    {
        printf("%i ",arr[i]);
    }
    printf("\n");
    
    return 0;
}