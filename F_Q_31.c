// 31 ) Write a program to print Fibonacci series up to Nth terms .
#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm, i = 1;

    printf("Enter the number of n : ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    while (i<=n) {
        if (i == n) printf("%d", t1);
        else printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        i++;
    }

    return 0;
}