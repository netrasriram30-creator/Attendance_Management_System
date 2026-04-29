#ifndef FACULTY_H
#define FACULTY_H

#include <iostream>
#include <string>
#include <limits>
using namespace std;

class faculty {
private:
    string fname;
    string subject;

public:
    void addFaculty() {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Faculty Name: ";
        getline(cin, fname);

        cout << "Enter Subject: ";
        getline(cin, subject);
    }

    void displayFaculty() {
        if (fname.empty()) {
            cout << "No faculty data available.\n";
            return;
        }

        cout << "\n--- Faculty Details ---\n";
        cout << "Name: " << fname << endl;
        cout << "Subject: " << subject << endl;
    }
};

#endif