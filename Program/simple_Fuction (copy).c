#include<stdio.h>

int squarer(int);

int squarer(int num)
{
    return num * num;
} 

int main(){
   int num=0,res=0;

printf("Enter the number:\n");
scanf("%d",&num);
   res=squarer(num);
  printf("square of %d=%d\n",num,res);
    return 0;
}