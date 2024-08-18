//Five subject marks

#include<stdio.h>
int main()
{
   int phy,chem,math,bio,comp;
   float per;

   printf("Enter five subject marks:");
   scanf("%d%d%d%d%d",&phy,&chem,&math,&bio,&comp);

   per=(phy+chem+math+bio+comp)/5.0;
   printf("percentage=%.2f\n",per);

   if (per>=90)
   {
    printf("First class with Distinction");
   }
   else if (per>=80)
   {
    printf("First Class");
   }
   else if (per>=70)
   {
    printf("Second class");
   }
   else if (per>=60)
   {
    printf("");
   }
   else if (per>=40)
   {
    printf("Grade E");
   }
   else
   {
    printf("Fale");
   }
   
   

    return 0;
}