#include <iostream>
using namespace std;

int main () {
    int a, b,divide;
    cout<<"Enter your first value";
    cin>>a;
    cout<<"Enter your second value";
    cin>>b;

    try {
        if(b == 0) {
            throw b;
        }
        else if(a < 0) {
            throw 'A';
        }
        else {
            divide = a / b;
            cout<<divide;

        }

    }

    catch(int) {
        cout<<"can not divided by zero"<<endl;
    }
    catch(char) {
        cout<<"value can not be negative"<<endl;
    }

    return 0;
}