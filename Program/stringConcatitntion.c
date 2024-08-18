#include<stdio.h>

int main(){

int i=0;
int j=0;
char a[5];
char b[7];
char c[12];
printf("Enter string a:");
scanf("%s",a);
printf("Enter  string b:");
scanf("%s",b);
for (i=0,j=6;i<6;i++,j++)
{
    c[i]=a[i];
    c[j]=b[i];
}
c[12]='\0';
printf("%s",c);


return 0;
}