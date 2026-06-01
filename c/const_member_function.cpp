#include <iostream>
using namespace std;

class Rectangle {
    int length , breadth;
    public:
    Rectangle (int l, int w) {
        length = l;
        breadth = w;

    }

    int area() const {
        return length * breadth;
    }

};

int main ()  {
    Rectangle R1(3,4);
    cout<<R1.area();
}