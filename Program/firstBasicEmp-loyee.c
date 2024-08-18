# include<stdio.h>

struct employee
{
    int id;
    char name[50];
    float salary;
};


int main(){


struct employee e1;

printf("Enter id,name and salary for the employee.\n");
scanf("%d%s%f",&e1.id,e1.name,&e1.salary);

printf("ID=%d,Name=%s,Salary=%0.2f",e1.id,e1.name,e1.salary);

    return 0;
}