#include<stdio.h>

int main(){

int i=0;
char name[10];
printf("Enter name:");

scanf("%s",name);

printf("your name is:");

for (i = 0;i<9; i++)
{
    printf("%c",name[i]);
}

    return 0;
}