#include<stdio.h>

int main(){

int arr[]={1,2,3,4,5};
int i=0;

int *p;

p=&arr[0];
printf("array.");
printf("\n");

for (int i=0;i<5;i++)
{
    printf("%d",*(p+i));
    printf("\n");
}



    return 0;
}