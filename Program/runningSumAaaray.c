#include <stdio.h>
int main()
{

    int sum = 0;
    int arr[] = {1, 2, 3, 4};

    for (int i = 0; i < 4; i++)
    {
        sum += arr[i];
        printf("Sum %d:%d\t\n", i, sum);
    }

    return 0;
}