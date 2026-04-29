#include <iostream>
#include "student.h"
#include "faculty.h"
#include "attendance.h"

using namespace std;

int main() {
    student s;
    faculty f;
    attendance a;

    int ch;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Add Student\n";
        cout << "2. Add Faculty\n";
        cout << "3. View Student\n";
        cout << "4. View Faculty\n";
        cout << "5. Mark Attendance\n";
        cout << "6. Show Report\n";
        cout << "7. Exit\n";
        cout << "Enter Choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                s.addStudent();
                break;

            case 2:
                f.addFaculty();
                break;

            case 3:
                s.displayStudent();
                break;

            case 4:
                f.displayFaculty();
                break;

            case 5:
                a.markAttendance();
                break;

            case 6:
                a.showReport();
                break;

            case 7:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (ch != 7);

    return 0;
}