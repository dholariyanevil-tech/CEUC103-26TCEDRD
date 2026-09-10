#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
int main()
{
    char enroll[20];
    char name[50];
    char branch[10];
    char reference[70];
    char keyword[30];
    cout << "********************************************\n";
    cout << "STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "********************************************\n";
    // Accept student details
    cout << "Enter Enrollment Number : ";
    cin >> enroll;
    cin.ignore(); // clear buffer
    cout << "Enter Student Name : ";
    cin.getline(name, 50);
    cout << "Enter Branch : ";
    cin >> branch;
    cout << "--------------------------------------------\n";
    // Generate Student Reference ID (manual concatenation)
    strcpy(reference, name);
    strcat(reference, "-");
    strcat(reference, enroll);

    cout << "Student Reference\n";
    cout << reference << endl;

    cout << "--------------------------------------------\n";

    // Extract First Name and Last Name manually
    char first[25], last[25];
    int i = 0, j = 0;

    while (name[i] != ' ' && name[i] != '\0') 
    {
        first[j++] = name[i++];
    }
    first[j] = '\0';
    if (name[i] == ' ') i++; // skip space
    j = 0;
    while (name[i] != '\0') 
    {
        last[j++] = name[i++];
    }
    last[j] = '\0';
    cout << "First Name\n" << first << endl;
    cout << "Last Name\n" << last << endl;
    cout << "--------------------------------------------\n";
    // Keyword search
    cout << "Enter Keyword : ";
    cin >> keyword;

    if (strstr(name, keyword) != NULL) 
    {
        cout << "Keyword Found.\n";
    } else {
        cout << "Keyword Not Found.\n";
    }
    cout << "--------------------------------------------\n";
    // Display complete student report
    cout << "Student Report\n";
    cout << "Enrollment Number : " << enroll << endl;
    cout << "Student Name : " << name << endl;
    cout << "Branch : " << branch << endl;
    cout << "--------------------------------------------\n";
    return 0;
}
