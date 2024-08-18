#include<stdio.h>
int main(){

int sum=0;
int j;
int i;

int arr[3]={1,2,3};
int rev[3]={0,0,0};

for (i=1,j=1;i<3;i++,j++)
{
    rev[j]+=arr[i-1];
}
for (i=0;i<3;i++)
{
    printf("%d\t",rev[i]);
}


    return 0;
}