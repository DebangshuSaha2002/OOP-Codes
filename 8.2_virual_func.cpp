/*Create a class which stores employee name,id and salary 
Derive two classes from ‘Employee’ class: ‘Regular’ and ‘Part-Time’.
The ‘Regular’ class stores DA, HRA and basic salary. The 
‘Part-Time’ class stores the number of hours and pay per hour.
Calculate the salary of a regular employee and a par-time employee, 
using virtual function*/

#include<iostream>
using namespace std;

class Employee
{
    protected:
    string name;
    int id;
    public:
    virtual void output()
    {
        cout<<"Base class\n";
    }
};

class Regular:public Employee
{
    protected:
    float DA;
    float HRA;
    float Basic_salary;
    public:
    void input()
    {
        cout<<"Enter the salary: ";
        cin>>Basic_salary;
    }
    void calculation()
    {
        DA=0.8*Basic_salary;
        HRA=0.1*Basic_salary;
        Basic_salary=Basic_salary+DA+HRA;
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
    int salary1;
    public:
    void input()
    {
        cout<<"Enter the number of hours:";
        cin>>hours;
        pph=100;
        salary1=pph*hours;
    }
    void output()
    {
        cout<<"The salary for the Part-time employee is: "<<salary1;
    }
};

int main()
{
    Employee e;
    Employee *p;
    Regular r;
    r.input();
    r.calculation();
    p=&r;
    p->output();

    parttime pp;
    pp.input();
    p=&pp;
    p->output();
    return 0;
}