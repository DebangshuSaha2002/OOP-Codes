/*Create a class shape. Derive three classes from it; Circle, 
Square and Triangle. Find area of each shape and display it, 
using virtual function.*/

#include<iostream>
using namespace std;
class shape
{
    protected:
    float area;
    public:
    virtual void show()
    {
        cout<<"Base class";
    }
};

class circle:public shape
{
    protected:
    double r;
    public:
    void input()
    {
        cout<<"\nEnter the radius of the circle: ";
        cin>>r;
    }
    void show()
    {
        area=(22/7)*r*r;
        cout<<"\nArea of the circle is: "<<area;
    }
};

class triangle:public shape
{
    protected:
    double b,h;
    public:
    void input()
    {
        cout<<"\nEnter the base of the triangle: ";
        cin>>b;
        cout<<"\nEnter the height of the triangle: ";
        cin>>h;
    }
    void show()
    {
        area=(0.5)*b*h;
        cout<<"\nArea of the triangle is: "<<area;
    }
};

class square:public shape
{
    protected:
    double s;
    public:
    void input()
    {
        cout<<"\nEnter the side of the rectangle: ";
        cin>>s;
    }
    void show()
    {
        area=s*s;
        cout<<"\nArea of the Square is: "<<area;
    }
};

int main()
{
    shape *p;
    circle c;
    triangle t;
    square ss;
    c.input();
    p=&c;
    p->show();
    t.input();
    p=&t;
    p->show();
    ss.input();
    p=&ss;
    p->show();
    return 0;
}