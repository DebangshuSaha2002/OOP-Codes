/*Extend the program ii. of inheritance to include a class sports, which stores the marks in

sports activity. Derive the result class from the classes ‘test’ and ‘sports’. Create objects

using parameterized constructors .Calculate the total marks and percentage of a student.*/


#include <iostream>
#include <string.h>
using namespace std;

class student
{
protected:
    char name[20];
    int roll;
    int age;

public:
    void getdata()
    {
        cout << "Enter name: ";
        cin>>name;
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter age: ";
        cin >> age;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Age: " << age << endl;
    }
};

class test : public student
{
    protected:
    int marks[5];

    public:
    void getmarks()
    {
        cout << "Enter marks: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }
    void displaymarks()
    {
        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

class sports
{
protected:
    int mark;

public:
    void getmarks()
    {
        cout << "Enter marks: ";
        cin >> mark;
    }
    void displaymarks()
    {
        cout << "Marks: " << mark << endl;
    }
};

class result : public test, public sports
{
protected:
    int total;
    float percentage;

public:
    void getdata()
    {
        test::getdata();
        test::getmarks();
        sports::getmarks();
    }
    void display()
    {
        test::display();
        test::displaymarks();
        sports::displaymarks();
    }
    void calculate()
    {
        total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
        total += mark;
        percentage = (float)total / 6;
    }
    void displayresult()
    {
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << endl;
    }
};

int main()
{
    result r;
    r.getdata();
    r.display();
    r.calculate();
    r.displayresult();
    return 0;
}