#include<stdio.h>
int main(){

 int length=0;
char str[]="anmol";

while (str[length]!='\0')
{
    length++;
}
printf("\nLength of %s is %d.\n",str,length);


    return 0;

}