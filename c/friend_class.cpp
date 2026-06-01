#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int sumcomplex(Complex, Complex);
};

class Complex {
    int a, b;

public:
    friend int Calculator::sumcomplex(Complex, Complex);

    void setNumber(int n1, int n2) {
        a = n1;
        b = n2;
    }

    void printNumber() {
        cout << a << " + " << b << "i" << endl;
    }
};

int Calculator::sumcomplex(Complex o1, Complex o2) {
    return (o1.a + o2.a);
}

int main() {
    Complex c1, c2;
    Calculator calc;

    c1.setNumber(2, 3);
    c2.setNumber(4, 5);

    int res = calc.sumcomplex(c1, c2);
    cout << "The result is : " << res << endl;

    return 0;
}
