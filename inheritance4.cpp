/*Create a class ‘shape’. Derive three classes from it: Circle, Triangle and Rectangle.

Include the relevant data members and functions in all the classes. Find the area of each

shape and display it.*/

#include<iostream>
using namespace std;

class shape
{
    protected:
    double area;
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
    void areacircle()
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
    void areatriangle()
    {
        area=(0.5)*b*h;
        cout<<"\nArea of the triangle is: "<<area;
    }
};

class rectangle:public shape
{
    protected:
    double l,br;
    public:
    void input()
    {
        cout<<"\nEnter the length of the rectangle: ";
        cin>>l;
        cout<<"\nEnter the breadth of the rectangle: ";
        cin>>br;
    }
    void arearectangle()
    {
        area=l*br;
        cout<<"\nArea of the rectangle is: "<<area;
    }
};

int main()
{
    circle c;
    c.input();
    c.areacircle();

    triangle t;
    t.input();
    t.areatriangle();

    rectangle r;
    r.input();
    r.arearectangle();
    return 0;
}