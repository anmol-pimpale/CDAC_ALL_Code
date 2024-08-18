#include <stdio.h>

int i = 0;
int j = 0;
char a[5];
char b[7];
char c[12];

int start = 1;
int end = 3;

int i = 0;
int j = 0;

char str[] = "abcdefgh";
char sub[50] = " ";

int d = 0, e = 0, l = 0, mid = 0;

char str[50] = " ";

void isConcatination();

// void isReverse();
void isSubstring();
void isPalindrome();
int length(int a);

void isConcatination()
{
    int i = 0;
    int j = 0;
    char a[5];
    char b[7];
    char c[12];
    printf("Enter string a:");
    scanf("%s", a);
    printf("Enter  string b:");
    scanf("%s", b);
    for (i = 0, j = 6; i < 6; i++, j++)
    {
        c[i] = a[i];
        c[j] = b[i];
    }
    c[12] = '\0';
    printf("%s", c);
    return;
}

void isReverse()
{
    return;
}

void isSubstring()
{

    for (k = 0, l = start; l < end; i++, l++)
    {

        sub[k] = str[l];
    }
    sub[k] = '\0';

    printf("\n string is:%s", str);
    printf("\n string is:%s", sub);
    return;
}

void isPalindrome()
{
    int i = 0, j = 0;
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
    printf("i=%d, j=%d\n", i, j);

    if (i >= j)
        printf("string is palindrome:");

    else
        printf("string is not palindome:");

    return;
}

int length(int a)
{
    return 0;
}

int main()
{

    isConcatination();
    isSubstring();
    isPalindrome();

    return 0;
}