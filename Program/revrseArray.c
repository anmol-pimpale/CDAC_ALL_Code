
//reverse an array
#include<stdio.h>
int main(){


int i=0;
int j=0;
int arr[3]={1,2,3};
int rev[3]={0,0,0};

for (i=2,j=0;i>=0;i--,j++)
{
    rev[j]=arr[i];
}
for (i=0;i<3;i++)
{
    printf("%d\t",rev[i]);
}


    return 0;
}