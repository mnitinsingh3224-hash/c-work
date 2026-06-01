#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
    public:
    void getData();
    void putData();
};
void Employee::getData() {
    cout<<"Employee id :"<<endl;
    cin>>id;
    cout<<"Employee name:"<<endl;
    cin>>name;
}
void Employee::putData () {
    cout<<"Employee id :"<<id<<endl;
    cout<<"Empoyee name :"<<name<<endl;
}

int main() {
    Employee emp[30];
    int n;
    cout<<"Enter number of employee:";
    cin>>n;
    
    cout<<"employee information _________________"<<endl;
    for(int i = 0; i<n; i++) {
    
        emp[i].getData();

    }

    cout<<"Employee data ________________________"<<endl;
    for(int i = 0; i < n; i++) {
        emp[i].putData();
    }

}