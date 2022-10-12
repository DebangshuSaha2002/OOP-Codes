/*Extend the program ii. to derive a class from result from classs ‘test’ which includes

member function to calculate total marks and percentage of a student. Input the data for a

student and display its total marks and percentage.*/

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

class result:public test
{
    protected:
    int total;
    double percentage;
    public:
    void calculation()
    {
        total=m[0]+m[1]+m[2]+m[3]+m[4];
        percentage=total/5;
        cout<<"\nThe total marks is "<<total;
        cout<<"\nThe total percentage is "<<percentage;
    }
};

int main()
{
    result r;
    r.input();
    r.output();
    r.calculation();
    return 0;
}