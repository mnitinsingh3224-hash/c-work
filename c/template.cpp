#include <iostream>
using namespace std;

template <class T>
void mySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 3, b = 5;
    mySwap(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
