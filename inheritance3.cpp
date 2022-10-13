/*Extend the program ii. to include a class sports, which stores the marks in sports activity.

Derive the result class from the classes ‘test’ and ‘sports’. Calculate the total marks and

percentage of a student.*/

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

class sports
{
    protected:
    int s;
    public:
    void sportsmarks()
    {
        cout<<"\nEnter the sports marks: ";
        cin>>s;
    }
};

class result:public test,public sports
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
        cout<<"Sports mark is : "<<s;
    }
};

int main()
{
    result r;
    r.input();
    r.output();
    r.sportsmarks();
    r.calculation();
    return 0;
}