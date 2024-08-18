#include<stdio.h>
int main(){

int i,n;
printf("Enter a number\n");
scanf("%d",&n);

while (i<n)
{
    if (n%i==0)
    {
        break;
    }
    else
    i++;
}
   if (i==n)
   {
    printf("number is prime");
   }
   else
   printf("not prime");
   return 0;
}
