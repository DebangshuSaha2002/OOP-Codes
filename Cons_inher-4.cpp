/*Create a class ‘shape’. Derive three classes from it: Circle, Triangle and Rectangle.

Include the relevant data members and functions in all the classes. Find the area of each

shape and display it.*/

#include<iostream>
using namespace std;

class shape
{
    protected:
    double radius,base,height,length,breadth;
    public:
    shape(int r,int b,int h,int l,int br)
    {
        radius=r;
        base=b;
        height=h;
        length=l;
        breadth=br;
    }
};

class circle:public shape
{
    protected:
    double rad,ar1;
    public:
    circle(int r,int b,int h,int l,int br):shape(r,b,h,l,br)
    {
        rad=r;
        ar1=0.0;
    }
    void areacircle()
    {
        ar1=(22/7)*rad*rad;
    }
    void display();
};

class triangle:public shape
{
    protected:
    double ba,he,ar2;
    public:
    triangle(int r,int b,int h,int l,int br):shape(r,b,h,l,br)
    {
        ba=b;
        he=h;
        ar2=0.0;
    }
    void areatriangle()
    {
        ar2=(0.5)*ba*he;
    }
    void display();
};

class rectangle:public shape
{
    protected:
    double le,bre,ar3;
    public:
    rectangle(int r,int b,int h,int l,int br):shape(r,b,h,l,br)
    {
        le=l;
        bre=br;
        ar3=0.0;
    }
    void arearectangle()
    {
        ar3=le*bre;
    }
    void display();
};

void circle::display()
{
    cout<<"\nArea of the circle is:"<<ar1;
}
void triangle::display()
{
    cout<<"\nArea of the triangle is:"<<ar2;
}
void rectangle::display()
{
    cout<<"\nArea of the rectangle is:"<<ar3;
}

int main()
{
    int r,b,h,l,br;
    cout<<"\nEnter the radius of the circle: ";
    cin>>r;
    cout<<"\nEnter the base of the triangle: ";
    cin>>b;
    cout<<"\nEnter the height of the triangle: ";
    cin>>h;
    cout<<"\nEnter the length of the rectangle: ";
    cin>>l;
    cout<<"\nEnter the breadth of the rectangle: ";
    cin>>br;

    circle c(r,b,h,l,br);
    c.areacircle();
    c.display();

    triangle t(r,b,h,l,br);
    t.areatriangle();
    t.display();

    rectangle rr(r,b,h,l,br);
    rr.arearectangle();
    rr.display();
    return 0;
}