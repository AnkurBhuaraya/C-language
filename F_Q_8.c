// 8) Design a program that calculates the simple interest based on user_provided principle, rate and time.
#include<stdio.h>
int main(){
    int p, i, t;
    printf("Enter the principal amount: ");
    scanf("%i", &p);
    printf("Enter the Interest rate(In percentage): ");
    scanf("%i", &i);
    printf("Enter the time(in year): ");
    scanf("%i", &t);
    float si=(float)(p*i*t)/100;
    printf("simple interest: %.2f", si);
    return 0;
}