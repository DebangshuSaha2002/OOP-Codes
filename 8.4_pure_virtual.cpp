/* WAP to demonstrate use of pure virtual function and abstract base class.*/
#include<iostream>
using namespace std;

class A
{
    protected:
    int add;
    public:
    virtual void addit()=0; ////Pure virtual func
    virtual void show()=0; //Pure virtual func
};

class B:public A
{
    protected:
    int a,b;
    void addit()
    {
        cout<<"Enter the 1st num:";
        cin>>a;
        cout<<"Enter the 2nd num:";
        cin>>b;
        add=a+b;
    }
    void show()
    {
        cout<<add;
    }
};

int main()
{
    A *p;
    B b;
    p=&b;
    p->addit();
    p->show();
    return 0;
}