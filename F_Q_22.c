// MINI PROJECT
// 22) B uild a Calculator which perform these operations (+ , - , / , x , %) .
#include<stdio.h>
    
int main()
{
    char operation;
    float firstNo, secondNo, result;
    
    printf("Enter first number : ");
    scanf("%f",&firstNo);
    // fflush(stdin);
    getchar();
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &operation);
    printf("Enter second number : ");
    scanf("%f",&secondNo);

    switch (operation)
    {
    case '+':
    result = firstNo + secondNo;
    printf("Result : %.2f", result);
    break;
    case '-':
    result = firstNo - secondNo;
    printf("Result : %.2f", result);
    break;
    case '*':
    result = firstNo * secondNo;
    printf("Result : %.2f", result);
    break;
    case '/':
    result = firstNo / secondNo;
    printf("Result : %.2f", result);
    break;
    case '%':
    result = (int)firstNo % (int)secondNo;
    printf("Result : %.2f", result);
    break;
    
    default:
    printf("Invalid operator!\n");
    }

    return 0;
}