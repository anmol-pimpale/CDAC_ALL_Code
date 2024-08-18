#include <stdio.h>
int main()
{

    int size1, size2, i;

    printf("Enter size of fisrt array:\n");
    scanf("%d", &size1);
    int arr[size1];

    printf("Enter size of second array:\n");
    scanf("%d", &size2);
    int arr1[size2];

    printf("Enter elements of first array:\n");
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter elements of second array:\n");
    for (i = 0; i < size2; i++)
    {
        scanf("%d", &arr1[i]);
    }

    if (size1 != size2)
    {
        printf("Array not in equal in size.\n");
    }

    else
    {
        printf("Array size is equal.\n");
    }
    int equal = 0;
    for (i = 0; i < size1; i++)
    {
        if (arr[i] != arr1[i])
        {
            printf("Array are not same.\n");
            
            break;
        }
        else
        {

            printf("Arrays are same.\n");
            break;
                }
    }
    return 0;
}