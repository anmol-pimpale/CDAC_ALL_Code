#include <stdio.h>
int main()
{

    int i, j;

    char str[200];
    char ans[200];

    printf("Enter a string:");
    scanf("%s", str);

    for (i = 0, j = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i]== 'o'|| str[i] == 'u')
        {
        }
        else
        {
            ans[j] = str[i];
            j++;
        }
    }
    printf("removing of vowels string:\n %s\n", ans);

    return 0;
}