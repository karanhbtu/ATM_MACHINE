#include <bits/stdc++.h>
using namespace std;
class Bank {
private:
    string name;
    long long accnumber;
    char type[15];
    long long amount = 0;
    long long tot = 0;
public:
    void setvalue()
    {
        cout << "Please enter your name"<<endl;
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your Account number"<<endl;;
        cin >> accnumber;
        cout << "Please enter your Account type"<<endl;
        cin >> type;
        cout << "Please enter your Balance"<<endl;
        cin >> tot;
    }
    void detailshow()
    {
        cout << "Name:" << name << endl;
        cout << "Account No:" << accnumber << endl;
        cout << "Account type:" << type << endl;
        cout << "Balance:" << tot << endl;
    }

    void depositmoney()
    {
        cout << "Enter amount to be deposit money :"<<endl;
        cin >> amount;
        tot = tot + amount;
    }
    void withdrawl()
    {
        int a;
        cout << "Enter amount to withdraw"<<endl;
        cin >> a;
        tot -= a;
    }
};
int main()
{
    Bank bn;
    int choice;
    while (true) {
        cout << "Enter Your Choice"<<endl;
        cout << "1. Enter name, Account "
             << "number, Account type"<<endl;
        cout << "\t2. Balance Enquiry"<<endl;
        cout << "\t3. depositmoney Money"<<endl;
        cout << "\t4. Withdraw Money"<<endl;
        cout << "\t5. Exit"<<endl;
        cin >> choice;
        switch (choice) {
        case 1:
            bn.setvalue();
            break;
        case 2:
            bn.detailshow();
            break;
        case 3:
            bn.depositmoney();
            break;
        case 4:
            bn.withdrawl();
            break;
        case 5:
            exit(true);
            break;
        default:
            cout << "Please enter the choice from 1 to 5"<<endl;
        }
    }
}