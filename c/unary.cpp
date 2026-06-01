#include <iostream>
using namespace std;

class Number {
    int x;
    public:

    Number (int n = 0 ){
        x = n;

    }

    Number operator ++ () {
        x = x+1;
    }
    void get () {
        cout<<"The number you get"<<x<<endl;
    }
};
int main() {
    Number n1(5);
    ++n1;
    n1.get();
}