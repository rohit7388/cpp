/*
A1. Write C++ program to design a class called BankAccount. Include following data members
like name of the depositor, account number and balance. Use following member functions a) to
initialize values b) deposit an amount c) to withdraw an amount d) to display name and balance.
 */

#include <iostream>
using namespace std;

class BankAccount
{
    char name[20];
    int accno;
    int balance;
public:
    void read()
    {
        cout<<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter Accno"<<endl;
        cin>>accno;
        cout<<"Enter Balance"<<endl;
        cin>>balance;
    }
    void print()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Account Number: "<<accno<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
    void deposit()
    {
        int amount;
        cout<<"Enter amount"<<endl;
        cin>>amount;
        balance=balance+amount;
    }
    void withdraw()
    {
        int amount;
        cout<<"Enter amount to withdraw"<<endl;
        cin>>amount;
        if(amount>balance)
        {
            cout<<"Insufficient"<<endl;
        }
        else
        {
            balance=balance-amount;
        }
    }
    void put_balance()
    {
        cout<<"Account balance is: "<<balance<<endl;
    }

};
int main()
{
   BankAccount b1;
   b1.read();
   b1.print();
   b1.deposit();
   b1.withdraw();
   b1.put_balance();
    return 0;
}
