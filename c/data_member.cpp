#include <iostream>
using namespace std;

class Student {
    const int rollNo;
    public:
    Student (int r) : rollNo(r) {}
    void display () {
        cout<<"The roll no is "<<rollNo;
    }
};
int main() {
    Student s1(101);
    s1.display();
}