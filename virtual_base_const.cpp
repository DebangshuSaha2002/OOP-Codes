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

class B:virtual public A
{
    public:
    B()
    {
        cout<<"Class B constructor is called\n";
    }
    ~B()
    {
        cout<"Class B destructor is called\n";
    }
};

int main()
{
    B b;
    return 0;
}