
// table 2 to 10
#include<stdio.h>
int main(){
int i,j,res;

for (i=1;i<10;i++)
{
    for(int j=1;j<10;j++)
    {
         res=i*j;
        printf("%d*%d=%d\n",i,j,res);
    }

    printf("Table of %d\n",i);
}
    
    return 0;

}
