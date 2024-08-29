// 41 ) Accept size n from user and create a n size array then take n inputs into the and finally print the sum of all elements
#include<stdio.h>
    
int main()
{
    int n, sum = 0;
    printf("Enter the value of n (size of array) : ");
    scanf("%i",&n);
    
    int arr[n];

    printf("Enter the elements of array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%i",&arr[i]);
    }
    
    printf("Sum of all Array Elements = ");
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("%i",sum);
    
    
    return 0;
}