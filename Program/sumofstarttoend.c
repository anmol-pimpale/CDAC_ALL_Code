#include<stdio.h>

int main(){

int i,s,e,sum;
printf("enter the number\n");
scanf("%d%d",&s,&e);
for ( i = s; i <=e; i++)
{
    sum=sum+i;
    printf("%d+%d=%d\n",i,s,sum);
}

    return 0;
}