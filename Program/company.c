# include<stdio.h>

struct company
{
    int id;
    char dept[50];
    char name[50];
    float salary;
};


int main(){


struct company c1;

printf("Enter id,dept,name and salary of employee\n");
scanf("%d%s%s%f",&c1.id,c1.dept,c1.name,&c1.salary);

printf("ID=%d,Dept=%s,Name=%s,salary=%0.2f",c1.id,c1.dept,c1.name,c1.salary);

    return 0;
}