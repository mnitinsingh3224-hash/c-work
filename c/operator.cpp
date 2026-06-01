#include <iostream>
using namespace std;

class Number {
    int x;
    public:
     void set(int n) {
        x = n;
     }
    int operator < (Number obj) {
        if(x < obj.x) {
            return 1;
        } else {
            return 0;
        }
    }
    int get () {
        return x;
        
    }


};
int main () {
    Number p1,p2;
    p1.set(15);
    p2.set(10);

    if(p1 < p2) {
        cout<<"smallest"<<p1.get()<<endl;
    } else {
        cout<<"smallest"<<p2.get()<<endl;
    }
}