// 29 ) Write a program to find the prime numbers within a range of numbers .
#include<stdio.h>
    
int main()
{
    int sr, er, i, j, comma=0;

    printf("Enter the starting range : ");
    scanf("%i",&sr);
    printf("Enter the ending range : ");
    scanf("%i",&er);

    for ( i = sr; i <= er; i++)
    {
        int check = 0;
        for ( j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {

                check = 1;
                break;
            }
        }
        if (check == 0) 
        {
            if (comma == 1) printf(", ");
            printf("%i",i);
            comma = 1;
        }
    }
     
    
    return 0;
}