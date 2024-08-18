#include <stdio.h>

void replace(char *str, char old, char new)
{
    int i = 0;
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    for (i = 0; i < length; i++)
    {
        if (*(str + i) == old)
        {
            *(str + i) = new;
        }
    }
}

int main()
{

    char str[] = "Hello world";
    replace(str, 'l', 'z');
    printf("\n New string:%s\n", str);

    return 0;
}