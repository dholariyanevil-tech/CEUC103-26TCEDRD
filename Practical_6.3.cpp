#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student {
    string enroll;
    string name;
    float percentage;
    string grade;
};

int main() {
    int n;
    cout << "********************************************\n";
    cout << "STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "********************************************\n";
    cout << "Enter Number of Students : ";
    cin >> n;

    Student students[100]; // max 100 students
    cout << "Enter Student Details\n";
    for (int i = 0; i < n; i++) {
        cin >> students[i].enroll >> ws;
        getline(cin, students[i].name);
        cin >> students[i].percentage >> students[i].grade;
    }

    // Display current records
    cout << "\n--------------------------------------------\n";
    cout << "Current Student Records\n";
    cout << "--------------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << students[i].enroll << " "
             << students[i].name << " "
             << fixed << setprecision(2) << students[i].percentage << endl;
    }
    cout << "--------------------------------------------\n";

    // Insert new student
    cout << "\nInsert New Student\n";
    int pos;
    cout << "Enter Position : ";
    cin >> pos;
    if (pos < 1 || pos > n + 1) {
        cout << "Invalid Position!\n";
    } else {
        for (int i = n; i >= pos; i--) {
            students[i] = students[i - 1];
        }
        cout << "Enter Enrollment Number : ";
        cin >> students[pos - 1].enroll;
        cout << "Enter Student Name : ";
        cin.ignore();
        getline(cin, students[pos - 1].name);
        cout << "Enter Percentage : ";
        cin >> students[pos - 1].percentage;
        cout << "Enter Grade : ";
        cin >> students[pos - 1].grade;
        n++;
        cout << "Record Inserted Successfully.\n";
    }

    cout << "\n--------------------------------------------\n";
    cout << "Updated Student Records\n";
    cout << "--------------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << students[i].enroll << " "
             << students[i].name << " "
             << fixed << setprecision(2) << students[i].percentage << endl;
    }
    cout << "--------------------------------------------\n";

    // Update student record
    cout << "\nUpdate Student Record\n";
    string searchEnroll;
    cout << "Enter Enrollment Number : ";
    cin >> searchEnroll;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (students[i].enroll == searchEnroll) {
            cout << "Enter New Percentage : ";
            cin >> students[i].percentage;
            cout << "Enter New Grade : ";
            cin >> students[i].grade;
            cout << "Record Updated Successfully.\n";
            found = true;
            break;
        }
    }
    if (!found) cout << "Record Not Found!\n";

    cout << "\n--------------------------------------------\n";
    cout << "Updated Student Records\n";
    cout << "--------------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << students[i].enroll << " "
             << students[i].name << " "
             << fixed << setprecision(2) << students[i].percentage << endl;
    }
    cout << "--------------------------------------------\n";

    // Delete student record
    cout << "\nDelete Student Record\n";
    cout << "Enter Position : ";
    cin >> pos;
    if (pos < 1 || pos > n) {
        cout << "Invalid Position!\n";
    } else {
        for (int i = pos - 1; i < n - 1; i++) {
            students[i] = students[i + 1];
        }
        n--;
        cout << "Record Deleted Successfully.\n";
    }

    cout << "--------------------------------------------\n";
    cout << "Final Student Records\n";
    cout << "--------------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << students[i].enroll << " "
             << students[i].name << " "
             << fixed << setprecision(2) << students[i].percentage << " "
             << students[i].grade << endl;
    }
    cout << "--------------------------------------------\n";

    return 0;
}
