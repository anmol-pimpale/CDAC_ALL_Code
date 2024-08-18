
// count the prime no 1 to 200
#include<stdio.h>
int main(){

int i,j,count=0;
printf(" 1 to 100 prime numbers");

for (i=1;i<=100;i++)
{
    for (j=2;j<i;j++)
    {
        if (i%j==0)
        {
            count++;
            break;
        }
        
    }
    if (count==0 && i!=1)
    
        printf("%d\n",i);
        count=0;
    
    
}

   
   return 0;
}