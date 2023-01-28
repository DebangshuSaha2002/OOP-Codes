//Overload new and delete operator

#include<iostream>
using namespace std;

class student
{
    string name;
    int age;
    public:
    student(string n,int a)
    {
        name=n;
        age=a;
    }
    void display()
    {
        cout<<"Name="<<name<<endl;
        cout<<"Age="<<age<<endl;
    }
    void * operator new(size_t size)
    {
        cout<<"\nOverloading new operator";
        void * p=malloc(size);
        return p;
    }
    void operator delete(void * p)
    {
        cout<<"\nOverloading delete operator ";
        free(p);
    }
};

int main()
{
    student *s=new student("Debangshu",21);
    s->display();
    delete(s);
    return 0;
}