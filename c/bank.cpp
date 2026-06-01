#include <iostream>
using namespace std;

class BankAccount {
    private:

    string name;
    int AccountNumber;
    float balance;

    public:

    BankAccount (string n, int accNO, float bal ){
        name = n;
        AccountNumber = accNO;
        balance = bal;
    }

    void deposit(float amount) {
        balance = balance+amount;
        cout<<"Amount deposited :"<<amount<<endl;
    }

    void withdrawl(float amount) {
        if(amount > balance) {
            cout<<"Insufficent funds !"<<endl;
        } else {
            balance = balance - amount;
            cout<<"Amount withdrawl :"<<amount<<endl;
        }
    }

    void checkBalance() {
        cout<<"Current balance is :"<<balance<<endl;
    }

    void displayDetail() {
        cout<<"-------Account Details--------"<<"\n"<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"Account number :"<<AccountNumber<<endl;
        cout<<"Balance "<<balance<<"\n"<<endl;
    }


};

int main() {
    BankAccount acc("Nitin Singh", 1234 , 1000);

    acc.displayDetail();
    acc.deposit(500);
    acc.withdrawl(1000);
    acc.checkBalance();

    return 0;

}
