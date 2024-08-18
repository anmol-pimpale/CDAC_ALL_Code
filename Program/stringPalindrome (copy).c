#include<stdio.h>
int main(){



int i=0,j=0,l=0,mid=0;
i=0;
l=5;
mid=l/2;
j=l-1;
char str[]="nitin";
while (i<j)
{
    if (str[i]!=str[j])
    {
        break;
    }
    else
       i++;
       j--;
    
}
if (i==j)
{
    printf("string is palindrome:");
}
else
printf("string is not palindome:");



    return 0;
}