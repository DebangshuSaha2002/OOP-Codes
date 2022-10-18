/*Extend the program ii. to derive a class from result from classs ‘test’ which includes

member function to calculate total marks and percentage of a student. Input the data for a

student and display its total marks and percentage.*/


//Using parameterized CONSTRUCTORS

#include<iostream>
using namespace std;

class student
{
    protected:
    string name;
    int roll;
    int age;
    public:
    student(string n,int r,int a)
    {
        name=n;
        roll=r;
        age=a;
    }
};

class test:public student
{
    protected:
    int m[5];
    public:
    test(int arr[],string n,int r,int a):student(n,r,a)
    {
        for(int i=0;i<5;i++)
        {
            m[i]=arr[i];
        }
    }
};

class result:public test
{
    protected:
    int total;
    double percentage;
    public:
    result(int arr[],string n,int r,int a):test(arr,n,r,a)
    {
        total=0;
        percentage=0.0;
    }

    void calculation()
    {
        for(int i=0;i<5;i++)
        {
            total+=m[i];
        }
        percentage=total/5;
    }

    void display();
};

void result::display()
{
    cout<<"\nName:"<<name;
    cout<<"\nRoll:"<<roll;
    cout<<"\nAge:"<<age;
    cout<<"\nTotal marks:"<<total;
    cout<<"\nTotal percentage:"<<percentage<<"%"<<"\n";
}

int main()
{
    string name;
    int roll,age,m[5];
    cout<<"\nEnter the name of the student: ";
    cin>>name;
    cout<<"\nEnter the roll num of the student: ";
    cin>>roll;
    cout<<"\nEnter the age of the student: ";
    cin>>age;
    cout<<"\nEnter the marks in 5 subjects: ";
    for(int i=0;i<5;i++)
    {
        cin>>m[i];
    }
    result r(m,name,roll,age);
    r.calculation();
    r.display();
    return 0;
}