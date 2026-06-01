#include <iostream>
#include <exception>
using namespace std;

int main() {
    try {
        throw runtime_error("Error occurred");
    }
    catch (exception &e) {   // ❌ no const used
        cout << e.what();
    }
    return 0;
}
