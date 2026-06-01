#include <iostream>
#include <fstream>
using namespace std;

int main () {

ifstream infile("sample.txt");
ofstream outfile("destination.txt");
char ch;

while  (infile.get(ch)) {
    outfile.put(ch);
}

infile.close();
outfile.close();

return 0;
}
