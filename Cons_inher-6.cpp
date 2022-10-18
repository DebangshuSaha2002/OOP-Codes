#include <iostream>
using namespace std;

class Account{
    protected:
        int accNum, accBal;
        string customerName;
};

class Savings: public Account{
    int minBal;
    public:
        Savings(){
            minBal = 10000;
        }

        void displayBal(){
            cout << "Current Balance: " << accBal << endl;
        }

        void inputDetails(){
            cout << "For Savings Account: \n";
            cout << "Enter customer name: ";
            cin >> customerName;
            cout << "Enter account number: ";
            cin >> accNum;
            cout << "Enter account balance: ";
            cin >> accBal;
        }

        void deposit(){
            int dep;
            cout << "Enter amount to be deposited: ";
            cin >> dep;
            accBal += dep;
            cout << "Rupees " << dep << " deposited\n";
            displayBal();
        }

        void withdraw(){
            int withdrawal;
            cout << "Enter amount to be withdrawn: ";
            cin >> withdrawal;
            if (accBal - withdrawal >= minBal){
                cout << "Rupees " << withdrawal << " withdrawn\n";
                accBal -= withdrawal;
            }
            else
                cout << "Insufficient Balance\n";
            displayBal();
        }
};

class Current: public Account{
    int overDueAmt;
    public:
        Current(){
            overDueAmt = 0;
        }

        void displayBal(){
            cout << "Current Balance: " << accBal << endl;
        }
        
        void inputDetails(){
            cout << "For Current Account: \n";
            cout << "Enter customer name: ";
            cin >> customerName;
            cout << "Enter account number: ";
            cin >> accNum;
            cout << "Enter account balance: ";
            cin >> accBal;
        }

        void deposit(){
            int dep;
            cout << "Enter amount to be deposited: ";
            cin >> dep;
            accBal += dep;
            cout << "Rupees " << dep << " deposited\n";
            displayBal();
        }

        void withdraw(){
            int withdrawal;
            cout << "Enter amount to be withdrawn: ";
            cin >> withdrawal;
            cout << "Rupees " << withdrawal << " withdrawn\n";
            accBal -= withdrawal;
            overDueAmt = -accBal;
            if (accBal <= 0)
                cout << "Rupees " << overDueAmt << " overdue\n";
            displayBal();
        }
};

int main(){
    Savings acc1;
    Current acc2;
    acc1.inputDetails();
    acc1.deposit();
    acc1.withdraw();
    acc1.displayBal();
    cout << '\n';
    acc2.inputDetails();
    acc2.deposit();
    acc2.withdraw();
    acc2.displayBal();
    return 0;
}