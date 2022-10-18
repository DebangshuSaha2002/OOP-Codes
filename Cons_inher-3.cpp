/*Extend the program ii. to include a class sports, which stores the marks in sports activity.

Derive the result class from the classes ‘test’ and ‘sports’. Calculate the total marks and

percentage of a student.*/


#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

class student
{
    protected:
    string name;
    int roll;
    int age;
    int sportsmarks;
    public:
    student(string n,int r,int a,int ss)
    {
        name=n;
        roll=r;
        age=a;
        sportsmarks=ss;
    }
};

class test:public student
{
    protected:
    int m[5];
    public:
    test(int arr[],string n,int r,int a,int ss):student(n,r,a,ss)
    {
        for(int i=0;i<5;i++)
        {
            m[i]=arr[i];
        }
    }
};

class sports
{
    protected:
    int s;
    public:
    sports(int arr[],string n,int r,int a,int ss)
    {
        s=ss;
    }
};


class result:public test,public sports
{
    protected:
    int total;
    double percentage;
    public:
    result(int arr[],string n,int r,int a,int ss):test(arr,n,r,a,ss),sports(arr,n,r,a,ss)
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
    cout<<"\nTotal Sports Marks:"<<s;
}

int main()
{
    string name;
    int roll,age,sm,m[5];
    cout<<"\nEnter the name of the student: ";
    cin>>name;
    cout<<"\nEnter the roll num of the student: ";
    cin>>roll;
    cout<<"\nEnter the age of the student: ";
    cin>>age;
    cout<<"\nEnter the sports marks of the student: ";
    cin>>sm;
    cout<<"\nEnter the marks in 5 subjects: ";
    for(int i=0;i<5;i++)
    {
        cin>>m[i];
    }
    result r(m,name,roll,age,sm);
    r.calculation();
    r.display();
    return 0;
}