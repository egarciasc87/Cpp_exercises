#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

void ShowBalance(double balance);
double Deposit(double balance);
double Withdraw(double balance);

int main()
{
    double balance = 0;
    char opt;

    do
    {
        cout<<"------------BANKING APPLICATION------------"<<endl;
        cout<<"Select operation:"<<endl;
        cout<<"(1) Show balance"<<endl;
        cout<<"(2) Deposit money"<<endl;
        cout<<"(3) Withdraw money"<<endl;
        cout<<"(4) Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>opt;
        std::cin.clear();
        fflush(stdin);

        switch (opt)
        {
        case '1':
            ShowBalance(balance);
            break;
        case '2':
            balance = Deposit(balance);
            break;
        case '3':
            balance = Withdraw(balance);
            break; 
        case '4':
            cout<<"Good bye!";
            break; 
        default:
            cout<<"Invalid choice, try again."<<endl;
            break;
        }
    } while (opt != '4');

    return 0;
}

double Deposit(double balance)
{
    double money = 0;
    cout<<"Enter amount of money to deposit: ";
    cin>>money;
    balance += money;
    cout<<"Operation executed successfully"<<endl;
    ShowBalance(balance);
    return balance;
}

double Withdraw(double balance)
{
    double money = 0;
    cout<<"Enter amount of money to withdraw: ";
    cin>>money;

    if (balance - money > 0)
    {
        balance -= money;
        cout<<"Operation executed successfully"<<endl;
        ShowBalance(balance);
    }
    else
    {
        cout<<"Not enough funds"<<endl;
    }
    return balance;
}

void ShowBalance(double balance)
{
    cout<<"Balance of the bank account: $"<<balance<<endl<<endl;
}