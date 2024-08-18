# include<stdio.h>

struct product
{
    int id;
    char name[50];
    float price;
};


int main(){


struct product e1;

printf("Enter id,name and price of the product\n");
scanf("%d%s%f",&e1.id,e1.name,&e1.price);

printf("ID=%d,Name=%s,price=%0.2f",e1.id,e1.name,e1.price);

    return 0;
}