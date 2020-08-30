#include <iostream>
using namespace std;
class Account
{

public:
    int balance;
Account()
{
if(balance<0)
{
cout<<"Invalid balance"<<endl;
}
}
int Credit()
{
int amt1=0;
cout<<"Enter amount to CREDIT!"<<endl;
cin>>amt1;
balance=balance+amt1;
return 0;
}
int Debit()
{
int amt2=0;
cout<<"Enter the amount to DEBIT!"<<endl;
cin>>amt2;
if(amt2>balance)
{
cout<<"Debit exceeds the balance"<<endl;
}
else

balance=balance-amt2;
return 0;
}
int getBalance()
{
return (balance);
}
};
int main()
{
    Account ac;
    cout<<"Enter the balance"<<endl;
    cin >>ac.balance;
    int b=0;


int return1=ac.Credit();
int return2=ac.Debit();
cout<<"Current balance in your account is Rs";
b=ac.getBalance();
cout<<b<<endl;
}
