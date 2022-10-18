
#include<iostream>
using namespace std;

class student
{
    protected:
    string name;
    int roll;
    int age;
    int *m;
};

class test:public student
{
    public:
    test(string n,int r,int a,int *marks)
    {
        name=n;
        roll=r;
        age=a;
        m=marks;
    }
    void display()
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
    int mm[5];
    cout<<"Enter the marks in 5 subjects: \n";
    for(int i=0;i<5;i++)
    {
        cin>>mm[i];
    }

    test t("Debangshu",10,20,mm);
    t.display();
    return 0;
}