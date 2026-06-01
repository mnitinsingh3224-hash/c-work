#include <iostream>
using namespace std;

class A {
    public:
    virtual void draw() = 0;
    void info () {
        cout<<"this is information part :"<<endl;
    }

};

class B: public A {
    public:
    void draw () {
        cout<<"Drawing a circle:"<<endl;
    }

};

int main () {
    A* ptr;
    B obj;
    ptr = &obj;
    ptr->draw();
    ptr->info();
}