
// prime or not
#include<stdio.h>
int main(){

int i=2,n=0;
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
    printf("number is prime\n");
   }
   else{
   printf("number is not prime\n");
   }
   return 0;
}