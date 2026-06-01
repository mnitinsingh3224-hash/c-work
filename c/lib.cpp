#include <iostream>
using namespace std;

class Library {
private:
    string bookName;
    string studentName;
    bool issued;

public:
    // Function to add a book
    void addBook(string bname) {
        bookName = bname;
        issued = false;
        cout << "Book added: " << bookName << endl;
    }

    // Function to issue a book
    void issueBook(string sname) {
        if (!issued) {
            studentName = sname;
            issued = true;
            cout << "Book \"" << bookName << "\" issued to " << studentName << endl;
        } else {
            cout << "Sorry, book already issued!" << endl;
        }
    }

    // Function to return book
    void returnBook() {
        if (issued) {
            cout << "Book \"" << bookName << "\" returned by " << studentName << endl;
            issued = false;
            studentName = "";
        } else {
            cout << "Book is not issued yet!" << endl;
        }
    }

    // Function to show book status
    void showStatus() {
        cout << "\nBook Name: " << bookName << endl;
        cout << "Status: " << (issued ? "Issued" : "Available") << endl;
    }
};

int main() {
    Library lib;

    lib.addBook("C++ Programming");
    lib.showStatus();

    lib.issueBook("Nitin Singh");
    lib.showStatus();

    lib.returnBook();
    lib.showStatus();

    lib.returnBook(); 

    return 0;
}
