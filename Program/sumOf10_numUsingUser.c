#include <stdio.h>

int add(int num)
{

    if (num==0)
    {
        return 0;
    }
    else
    {
        return (num +add(num - 1));
    }
}
int main()
{
    int number;
    int sum;
    //printf("Enter a number:\n");
    //scanf("%d",&number);
    sum = add(100);
    printf("sum of 1 to 100 is %d\n",sum);
    return 0;
}
