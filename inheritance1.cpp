/*Create a class student which stores name, roll number and age of a student. Derive a class

test from student class, which stores marks in 5 subjects. Input and display the details of

a student.*/

#include<iostream>
using namespace std;

class student
{
    protected:
    char name[10];
    int roll;
    int age;
};

class test:public student
{
    protected:
    int m[5];
    public:
    void input()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"\nEnter Roll Num: ";
        cin>>roll;
        cout<<"\nEnter age: ";
        cin>>age;
        cout<<"\nEnter the marks in 5 subjects: ";
        cin>>m[0]>>m[1]>>m[2]>>m[3]>>m[4];
    }
    void output()
    {
        cout<<"\nThe details of the student is: ";
        cout<<"\nName: "<<name;
        cout<<"\nAge: "<<age;
        cout<<"\nRoll Num: "<<roll;
        cout<<"\nMarks in 5 subjects is: "<<m[0]<<","<<m[1]<<","<<m[2]<<","<<m[3]<<","<<m[4]<<endl;
    }
};

int main()
{
    test t;
    t.input();
    t.output();
    return 0;
}