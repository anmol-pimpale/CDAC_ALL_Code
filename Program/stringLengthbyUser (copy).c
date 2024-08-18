#include<stdio.h>
int main(){

 int length=0;
 
 char str[]="\0";

 printf("Enter a string");
 scanf("%s",str);


while (str[length]!='\0')
{
    length++;
}
printf("\nLength of %s is %d.\n",str,length);


    return 0;

}