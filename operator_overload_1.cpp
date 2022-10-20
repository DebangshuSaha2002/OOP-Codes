#include<iostream>
using namespace std;

class A
{
    int x,y;
    public:
    void input()
    {
        cin>>x>>y;
    }
    A operator +(A m)
    {
        A temp;
        temp.x=x+m.x;
        temp.y=y+m.y;
        return temp;
    }
    void show()
    {
        cout<<x<<"+ i "<<y<<endl;
    }
};

int main()
{
    A a,b,c;
    a.input();
    b.input();
    c=a+b;
    a.show();
    b.show();
    c.show();
    return 0;
}