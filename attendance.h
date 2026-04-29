#ifndef ATTENDANCE_H
#define ATTENDANCE_H

#include <iostream>
using namespace std;

class attendance {
private:
    int total = 0;
    int present = 0;

public:
    void markAttendance() {
        int choice;

        cout << "Enter 1 for Present, 0 for Absent: ";
        cin >> choice;

        if (choice == 1 || choice == 0) {
            total++;
            if (choice == 1)
                present++;
        } else {
            cout << "Invalid input!\n";
        }
    }

    void showReport() {
        if (total == 0) {
            cout << "No attendance data available.\n";
            return;
        }

        cout << "\n--- Attendance Report ---\n";
        cout << "Total Classes: " << total << endl;
        cout << "Present: " << present << endl;
        cout << "Percentage: " << (present * 100.0 / total) << "%\n";
    }
};

#endif