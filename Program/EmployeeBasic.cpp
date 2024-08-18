#include <iostream>

using namespace std;

class EmployeeBasic
{
public:
    int id;
    char name[50];
    float basic;
    float hra;
    float da;
    float ta;
    float salary;

    void displayEmployeeDetails()
    {

        cout << "ID :" << id << endl;
        cout << "NAME :"<< name << endl;
        cout << "BASIC :" << basic << endl;
        cout << "HRA :" << hra << endl;
        cout << "DA :" << da << endl;
        cout << "TA :" << ta << endl;
        cout << "SALARY :" << salary << endl;
    }

    void calculateSalary()
    {
        da = basic * 0.12;
        hra = basic * 0.18;
        ta = basic * 0.1;
        salary = basic + da + hra + ta;
    }

    void appraiseEmployeeSalary()
    {

        basic += basic * 0.05;
        calculateSalary();
        displayEmployeeDetails();
    }
};

int main()
{

    EmployeeBasic e;

    cout << "Enter id,nameand basic" << endl;

    cin >> e.id >> e.name >> e.basic;

    e.calculateSalary();
    e.displayEmployeeDetails();
    e.appraiseEmployeeSalary();

    return 0;
}