#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
    int age;
public:
    void get(string name, int age) {
        this->name = name;
        this->age = age;
    }
    int getAge() {
        return age;
    }
    string getName() {
        return name;
    }
};

int main() {
    Person p1, p2;
    p1.get("Ram", 25);
    p2.get("Shyam", 30);

    if(p1.getAge() > p2.getAge())
        cout << p1.getName() << " is elder";
    else
        cout << p2.getName() << " is elder";

    return 0;
}
