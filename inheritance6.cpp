/*Create a class which stores account number, customer name and balance. Derive two

classes from ‘Account’ class: ‘Savings’ and ‘Current’. The ‘Savings’ class stores

minimum balance. The ‘Current’ class stores the over-due amount. Include member

functions in the appropriate class for

-deposit money

-withdraw [For saving account minimum balance should be checked.]

[For current account overdue amount should be calculated.]

-display balance*/

#include<iostream>
using namespace std;

class Account
{
    protected:
    int accnum;
    char cusname[100];
    int balance;
    int withdraw;

    public:
    void input()
    {
        cout<<"\nEnter the account num: ";
        cin>>accnum;
        cout<<"\nEnter the customer name: ";
        cin>>cusname;
        cout<<"\nEnter the account balance: ";
        cin>>balance;
        cout<<"\nEnter the withdraw amount: ";
        cin>>withdraw;
    }
};

class Savings:public Account
{
    protected:
    int deposit;
    public:
    void check()
    {
        cout<<"Enter the amount you want to deposit: ";
        cin>>deposit;
        if(withdraw>(deposit+balance))
        {
            cout<<"\nNot enough balance in account to withdraw money";
        }
        else
        {
            cout<<"Acc Balance after withdrawing "<<withdraw<<" is "<<(deposit+balance-withdraw);
        }
    }
};

class Current:public Account
{
    protected:
    int overdue;

    public:
    void data()
    {
        overdue=balance-withdraw;
        cout<<"The overdue amount is: "<<overdue;
    }
};

int main()
{
    Savings s;
    s.input();
    s.check();
    Current c;
    c.input();
    c.data();
    return 0;
}