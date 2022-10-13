/*WAP to demonstrate the order of call of constructors and destructors in case of multiple

inheritance.*/

#include<iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout<<"Class A Constructor is called\n";
    }
    ~A()
    {
        cout<<"Class A Destructor is called\n";
    }
};

class B
{
    public:
    B()
    {
        cout<<"Class B Constructor is called\n";
    }
    ~B()
    {
        cout<<"Class B Destructor is called\n";
    }
};

class C:public A,public B
{
    public:
    C()
    {
        cout<<"Class C Constructor is called\n";
    }
    ~C()
    {
        cout<<"Class C Destructor is called\n";
    }
};

int main()
{
    C c;
    return 0;
}
