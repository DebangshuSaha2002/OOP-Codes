/*Create a class which stores employee name,id and salary Derive two classes from

‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and

basic salary. The ‘Part-Time’ class stores the number of hours and pay per hour.

Calculate the salary of a regular employee and a part-time employee.*/

#include<iostream>
using namespace std;

class Employee
{
    protected:
    char name[20];
    int id;
    int salary;
    public:
    void input()
    {
        cout<<"Enter the employee name: ";
        cin>>name;
        cout<<"\nEnter the employee ID: ";
        cin>>id;
        cout<<"\nEnter the employee salary: ";
        cin>>salary;
    }
};

class Regular:public Employee
{
    protected:
    float DA;
    float HRA;
    float Basic_salary;
    public:
    void calculation()
    {
        DA=0.8*salary;
        HRA=0.1*salary;
        Basic_salary=salary+DA+HRA;
    }
    void output()
    {
        cout<<"DA: "<<DA<<endl;
        cout<<"HRA: "<<HRA<<endl;
        cout<<"Basic Salary of a Regular Employee is: "<<Basic_salary<<endl;
        cout<<endl;
    }
};

class parttime:public Employee
{
    protected:
    int hours;
    int pph;
    int salary;
    public:
    void input()
    {
        cout<<"\nEnter the number of hours: ";
        cin>>hours;
        pph=100;
    }
    void output()
    {
        cout<<"The salary for the Part-time employee is: "<<(hours*pph);
    }
};

int main()
{
    Regular r;
    r.input();
    r.calculation();
    r.output();

    parttime p;
    p.input();
    p.output();

    return 0;
}