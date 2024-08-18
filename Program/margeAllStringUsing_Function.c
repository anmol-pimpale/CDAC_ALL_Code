#include <stdio.h>

char str[100];
int l = 0;
int mid = 0;
int j = 0;

int i = 0;

char a[5];
char b[7];
char c[12];

int start = 1;
int end = 3;
char sub[50] = " ";
int length = 0;

void isConcatination();
void isReverse();
void isSubstring();
void isPalindrome();
int isLength(int c);

void isConcatination()
{
    int i = 0;
    int j = 0;
    char a[5];
    char b[7];
    char c[12];
    printf("Enter string a:\n");
    scanf("%s", a);
    printf("Enter  string b:\n");
    scanf("%s", b);
    for (i = 0, j = 6; i < 6; i++, j++)
    {
        c[i] = a[i];
        c[j] = b[i];
    }
    c[12] = '\0';
    printf(" string is %s\n", c);

    return;
}

//*****************************************************************************************

void isReverse()
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

        printf("Reversed string %s", str);
    }

    return;
}

//**********************************************************************************************

void isSubstring()
{
    int start = 1;
    int end = 3;

    int i = 0;
    int j = 0;

    char str[] = "abcdefgh";
    char sub[50] = " ";

    for (i = 0, j = start; j < end; i++, j++)
    {

        sub[i] = str[j];
    }
    sub[i] = '\0';

    printf("\n string is:%s", str);
    printf("\n string is:%s", sub);

    return;
}

//************************************************************************************************

void isPalindrome()
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
    printf("i=%d, j=%d\n", i, j);

    if (i >= j)
        printf("string is palindrome:");

    else
        printf("string is not palindome:");

    return;
}

//*******************************************************************************************

int isLength(int num)
{   
    int length = 0;
    char str[]="\0";

    printf("Enter a string");
    scanf("%s", str);

    while (str[length] != '\0')
    {
        length++;
    }
    printf("\nLength is %d.\n",str,length);

    return num;
}

//********************************************************************************************

int main()
{
    int res=0;
    int num=0;
     isConcatination();
     isReverse();
     isSubstring();
     isPalindrome();
     res=isLength(num);

    return 0;
}