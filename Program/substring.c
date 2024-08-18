#include<stdio.h>
int main(){

int start=1;
int end=3;

int i=0;
int j=0;

char str[]="abcdefgh";
char sub[50]=" ";

for (i=0,j=start;j<end;i++,j++)
{

  sub[i]=str[j];
}
 sub[i]='\0';
 
printf("\n string is:%s",str);
printf("\n string is:%s",sub);


    return 0;
}