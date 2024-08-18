

//sum od the array
#include<stdio.h>
 int main(){

int sum=0;
int arr[4]={1,2,3,4};
for (int i=0;i<4;i++)
{
    sum+=arr[i];
    
    printf("%d\t",sum);
}



    return 0;
 }