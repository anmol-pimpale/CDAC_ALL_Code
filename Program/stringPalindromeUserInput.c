#include <stdio.h>
int main()
{

    int i = 0, j = 0, l = 0, mid = 0;

    char str[50] = " ";

    printf("Enter a string:");
    scanf("%s", str);

    while (str[l] != '\0')
        l++;
    
    mid = l / 2;
    j = l - 1;


    while (i < j)
    {
        printf("i=%c\n", str[i]);
        printf("j=%c\n", str[j]);

        if (str[i] != str[j])        
            break;
        
        else
        {
            i++;
            j--;
        }
    }
        printf("i=%d, j=%d\n",i,j);

    if (i >= j)
        printf("string is palindrome:");

    else
        printf("string is not palindome:");

    return 0;
}