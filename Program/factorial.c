#include <stdio.h>

int fact(int num)
{

    if (num == 0)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
}
int main()
{
    int res = 0;
    res = fact(5);
    printf("res=%d\n", res);
    return 0;
}
