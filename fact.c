#include<stdio.h>
int fact(int n)
{
    if (n>1)
    {
        return n * fact(n-1);/* recursion ,,, calling a func within a function**/
    }
    else
    {
        return n;
    }
}
int main()
{
    int number, result;
    printf("enter a positive number: ");
    scanf("%d", &number);

    result = fact(number);

    printf("factorial of %d is : %d", number, result);
    return 0;
}
