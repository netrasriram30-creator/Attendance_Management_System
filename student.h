#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <limits>
using namespace std;

class student {
private:
    string name;
    int id;

public:
    void addStudent() {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Student ID: ";
        cin >> id;
    }

    void displayStudent() {
        if (name.empty()) {
            cout << "No student data available.\n";
            return;
        }

        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

#endif