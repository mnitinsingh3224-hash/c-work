#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    ofstream file("primes.txt");   // Create the file

    for (int num = start; num <= end; num++) {
        bool isPrime = true;

        if (num <= 1)
            isPrime = false;
        else {
            for (int i = 2; i < num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
            file << num << " ";   // Write prime to file
    }

    file.close();
    cout << "Prime numbers saved in primes.txt";

    return 0;
}
