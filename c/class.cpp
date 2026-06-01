#include <iostream>
using namespace std;

class Car {
    public:
    string brand;
    string model;
    string name;

    void info() {
        cout<<"Car brand = "<<brand<<endl;
              cout<<"Car model = "<<model<<endl;
                    cout<<"Car name = "<<name<<endl;
    }
};

int main () {
    Car car1;
    car1.brand = "shfhs";
    car1.model =  "dfhhf";
    car1.name = "maruti";

    car1.info();
}