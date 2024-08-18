#include <iostream>
using namespace std;

class Employee
{

public:
    int id;
    char name[50];
    float salary;

    void print(){

        cout << "ID :" << id << "\n";
        cout << "NAME :"<< name << "\n";
        cout << "Salary :"<< salary << "\n";
    }
};
