#include<stdio.h>

int main()
{
    double num1,num2;
    char operator;
    printf("enter number1: ");
    scanf("%lf", &num1);
    printf("enter number2: ");
    scanf("\n%lf", &num2);
    printf("choose the operator ['+', '-', '*', '/'] ");
    scanf("\n%c", &operator);
   
    

    double result;
    switch (operator)
    {
    case '+':
        result= num1+num1;
        break;
    case '-':
        result=num1-num2;
        break;
    case '*':
        result=num1*num2;
        break;
    case '/':
        result=num1/num2;
        break;
    
    default:
        printf("syntax error");
        break;
    }
    printf("= %2lf", result);
    return 0;
}