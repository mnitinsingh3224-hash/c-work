#include <iostream>
#include <fstream>
using namespace std;

int main () {
    int start,end;
    cout<<"Enter your starting number"<<endl;
    cin>>start;
    cout<<"Enter your ending number"<<endl;
    cin>>end;

    if(start > end) {
        cout<<"The starting number should be less than the greater number"<<endl;
    }

    for(int num = start; num<end;  num ++) {
        string filename = "Table_" + to_string(num) + ".txt";
        ofstream file(filename);

        file<<"The multiplication table of :"<<num<<endl;

        for(int i = 1; i<=10; i++) {
            file<<num<<"*"<<i<<"="<<num * i<<endl;

        }
        file.close();
    }
}