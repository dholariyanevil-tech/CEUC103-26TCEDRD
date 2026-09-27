#include <iostream>
#include <string>
#include <iomaip>
using namespace std;

int main() 
{
    int n;
    cout << "********************************************\n";
    cout << "STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "********************************************\n";
    cout << "Enter Number of Students : ";
    cin >> n;
    string enroll[100], name[100], grade[100];
    float perc[100];
    cout << "Enter Student Details\n";
    for (int i = 0; i < n; i++) 
    {
        cin >> enroll[i] >> name[i] >> perc[i] >> grade[i];
    }

    cout << "--------------------------------------------\n";
    cout << "Current Student Records\n";
    for (int i = 0; i < n; i++) 
    {
        cout << enroll[i] << " " << name[i] << " " << perc[i] << " " << grade[i] << endl;
    }
    cout << "--------------------------------------------\n";

    // Insert new student
    cout << "Insert New Student\n";
    int pos;
    cout << "Enter Position : ";
    cin >> pos;
    for (int i = n; i > pos; i--) 
    {
        enroll[i] = enroll[i - 1];
        name[i] = name[i - 1];
        perc[i] = perc[i - 1];
        grade[i] = grade[i - 1];
    }
    cout << "Enter Enrollment Number : ";
    cin >> enroll[pos];
    cout << "Enter Student Name : ";
    cin >> name[pos];
    cout << "Enter Percentage : ";
    cin >> perc[pos];
    cout << "Enter Grade : ";
    cin >> grade[pos];
    n++;
    cout << "Record Inserted Successfully.\n";

    cout << "--------------------------------------------\n";
    cout << "Updated Student Records\n";
    for (int i = 0; i < n; i++) {
        cout << enroll[i] << " " << name[i] << " " << perc[i] << " " << grade[i] << endl;
    }
    cout << "--------------------------------------------\n";

    // Update student record
    cout << "Update Student Record\n";
    string enrollSearch;
    cout << "Enter Enrollment Number : ";
    cin >> enrollSearch;
    for (int i = 0; i < n; i++) 
    {
        if (enroll[i] == enrollSearch) 
        {
            cout << "Enter New Percentage : ";
            cin >> perc[i];
            cout << "Enter New Grade : ";
            cin >> grade[i];
            cout << "Record Updated Successfully.\n";
            break;
        }
    }

    cout << "--------------------------------------------\n";
    cout << "Updated Student Records\n";
    for (int i = 0; i < n; i++) 
    {
        cout << enroll[i] << " " << name[i] << " " << perc[i] << " " << grade[i] << endl;
    }
    cout << "--------------------------------------------\n";

    // Delete student record
    cout << "Delete Student Record\n";
    cout << "Enter Position : ";
    cin >> pos;
    for (int i = pos; i < n - 1; i++) 
    {
        enroll[i] = enroll[i + 1];
        name[i] = name[i + 1];
        perc[i] = perc[i + 1];
        grade[i] = grade[i + 1];
    }
    n--;
    cout << "Record Deleted Successfully.\n";
    cout << "--------------------------------------------\n";
    cout << "Final Student Records\n";
    for (int i = 0; i < n; i++) 
    {
        cout << enroll[i] << " " << name[i] << " " << perc[i] << " " << grade[i] << endl;
    }
    return 0;
}
