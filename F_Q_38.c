#include<stdio.h>
    
int main()
{
    int num, fav = 1, sum = 0;
    printf("Enter a number : ");
    scanf("%i",&num);

    int copy = num;

    while (num>0)
    {
        int rem = num%10;
        fav = 1;
            for (int i = 1; i <= rem; i++)
            {
                fav = fav*i;
            }
        sum = sum + fav;
        num=num/10;


    }

    if (sum==copy) printf("Yes it is a strong number.");
    else printf("Yes it not a strong number.");    
    
    return 0;
}