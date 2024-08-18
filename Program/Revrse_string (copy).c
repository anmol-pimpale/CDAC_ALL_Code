#include <stdio.h>
int main()
{

    char str[100];
    int l = 0;
    int mid = 0;
    int j = 0;
    printf("\n Enter a string:\n");
    scanf("%s", str);

    while (str[l] != '\0')
        l++;

    mid = l / 2;
    j = l - 1;

    for (int i = 0; j = l - 1, i <= j; i++, j--)
    {
        char c = str[i];
        str[i] = str[j];
        str[j] = c;

        printf("Reversed string %s",str);
    }

    return 0;
}