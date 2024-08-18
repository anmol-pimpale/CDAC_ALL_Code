#include <stdio.h>

int add(int num)
{

    if (num == 0)
    {
        return 0;
    }
    else
    {
        return num+add(num - 1);
    }
}
int main()
{
    int res = 0;
    res = add(10);
    printf("res=%d\n",res);
    return 0;
}
