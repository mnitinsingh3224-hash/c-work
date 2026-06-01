#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;

    if (start > end) {
        cout << "Invalid range! Starting number should be <= ending number.\n";
        return 0;
    }

    for (int num = start; num <= end; num++) {
        string filename = "Table_" + to_string(num) + ".txt";
        ofstream file(filename);

        if (!file) {
            cout << "Error creating file: " << filename << endl;
            continue;
        }

        file << "Multiplication Table of " << num << "\n\n";

        for (int i = 1; i <= 10; i++) {
            file << num << " x " << i << " = " << num * i << endl;
        }

        file.close();
        cout << "File created: " << filename << endl;
    }

    return 0;
}

