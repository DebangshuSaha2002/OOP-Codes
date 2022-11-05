#include<iostream>
using namespace std;

class A{
    int arr[5];
    public:
    istream & operator >>(istream &input)
    {
        for(int i=0;i<5;i++)
        {
            input>>arr[i];
        }
        return input;
    }

    ostream & operator <<(ostream &out)
    {
        for(int i=0;i<5;i++)
        {
            out<<arr[i]<<"\t";
        }
        out<<endl;
        return out;
    }
};

int main(){
    A t;
    printf("\nInsertion:");
    t>>cin;
    printf("\nExtraction:");
    t<<cout;
}