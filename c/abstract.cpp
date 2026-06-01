#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    virtual void area() = 0;   // pure virtual function
};

// Derived class
class Rectangle : public Shape {
public:
    void area() {
        int l = 10, b = 5;
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

int main() {
    Shape* s;          // pointer of abstract class
    Rectangle r;

    s = &r;            // base pointer → derived object
    s->area();         // calls Rectangle's area()

    return 0;
}
