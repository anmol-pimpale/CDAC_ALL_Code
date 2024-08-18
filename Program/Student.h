#include <iostream>

using namespace std;

class Student
{
    int id;
    char name[50];
    char marks;
    float percentage;
    char grade;
    int phy, chem, math, bio, comp;

    void print()
    {
        int Marks = 0;

        cout << "ID :" << id << "\n";
        cout << "NAME :" << name << "\n";
        cout << "Student total marks are:" << marks << endl;

        cout << "Percentage:" << percentage << "\n";
    }
};