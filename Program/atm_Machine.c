#include <stdio.h>
int main()
{

    int pin = 0, flag = -1, count = 0;

    do
    {
        if (count == 3)
        {
            printf("\n Max Attempts Reached %d\n", count);
            break;
        }
        printf("\n Enter  Pin:\n");
        scanf("%d", &pin);
        if (pin == 5798)
        {
            flag = 0;
            printf("\n Welcome To Bank ATM\n");
            printf("\n============Menu========\n");
            break;
        }

        else
        {
            flag = 1;
            count++;
            printf("\n Invalid pin\n");
            printf("\n Attempts %d\n", count);
        }

    } while (flag ==1);

    return 0;
}