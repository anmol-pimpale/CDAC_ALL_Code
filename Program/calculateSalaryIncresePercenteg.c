#include <stdio.h>
struct Employee
{
    int id;
    char name[50];
    float basic;
    float hra;
    float da;
    float ta;
    float salary;
};

struct Employee calculateSalary(struct Employee e1)
{
    e1.da = e1.basic * 0.18;   //18% da that's why we are taking 0.18
    e1.hra = e1.basic * 0.12;  //12% hra 
    e1.ta = e1.basic * 0.10;   //10% ta
    e1.salary = e1.basic + e1.da + e1.hra + e1.ta;

    return e1;
}

void appraiseEmployeeSalary(struct Employee *e1)         //in this line we pointer.
{

    e1->basic += (*(e1)).basic * 0.05;       //0.05 means we increase the basic salary to 5%     (->) this sign is use for pointer
    *e1 = calculateSalary(*e1);
}

void printEployeeDetails(struct Employee e1)
{

    printf("Id:%d\n", e1.id);
    printf("Name:%s\n", e1.name);
    printf("Basic:%f\n", e1.basic);
    printf("HRA:%f\n", e1.hra);
    printf("DA:%f\n", e1.da);
    printf("TA:%f\n", e1.ta);
    printf("Salary:%f\n", e1.salary);
}

int main()
{

    struct Employee e1;
    printf("Enter id,name and basic salary:\n");

    scanf("%d%s%f", &e1.id, e1.name, &e1.basic);      
    e1 = calculateSalary(e1);
    printEployeeDetails(e1);

    appraiseEmployeeSalary(&e1);    //&e1  means we pass the address because we deals with pointer

    printEployeeDetails(e1);

    return 0;
}