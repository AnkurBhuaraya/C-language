// 15) Write a program to read the age of a candidate and determine whether it is eligible for casting his/her own vote .
#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%i",&age);
    if (age<18)
    {
        printf("Ghar jaake pogo dekho balak");
    }
    else{
        printf("Shery ko vote dijiye !");
     }
    
    return 0;
}