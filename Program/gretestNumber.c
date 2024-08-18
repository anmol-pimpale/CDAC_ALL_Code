
// Three gretest number
#include<stdio.h>
int main(){

int a,b,c;

printf("Enter three numbers\n");
scanf("%d%d%d",&a,&b,&c);

if (a>=b && a>=c)
{
   printf("A is largest number",a);
}
else if (b>=a && b>=c)
{
    printf("B is largest number",b);
}
else if (c>=a && c>=b)
{
    printf("C is largest number",c);
}
else if((a==b)==c)
{
    printf("All three numbers are equal",a,b,c);


}
return 0;
}