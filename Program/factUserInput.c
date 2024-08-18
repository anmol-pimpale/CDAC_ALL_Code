#include <stdio.h>

long factorial(int num)
{

    if (num == 0)
    {
        return 1;
    }
    else
    {
        return (num *factorial(num - 1));
    }
}
int main()
{
    int number;
    long fact;
    printf("Enter a number:\n");
    scanf("%d",&number);
    fact = factorial(number);
    printf("Factorial of %d is %d\n",number,fact);
    return 0;
}
