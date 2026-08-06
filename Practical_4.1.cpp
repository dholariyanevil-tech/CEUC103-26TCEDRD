#include<iostream> // For input-output operations
#include<iomanip> // For formatted output
using namespace std;
int main()
{
    // Declare variables for students details
    string enroll,name,branch; 
    int sem,m1,p1,pf1,tm; // sem = semester, m1 = math marks, p1 = physics , pf1 = programming foundation marks, tm = total marks
    float avg,per; // avg = average, per = percentage
    long long no; // Mobile Number
    // Display system header
    cout<<"*****************************************************************\n";
    cout<<"                STUDENT RECORD MANAGEMENT SYSTEM                \n";
    cout<<"*****************************************************************\n\n";
    cout<<"Software version : 1.2\n\n";
    cout<<"-----------------------------------------------------------------\n";
    cout<<"Student Registration\n";
    cout<<"-----------------------------------------------------------------\n\n";
    // Input student deatils 
    cout<<left<<setw(25)<<"Enter Enrollment Number"<<": ";
    cin>>enroll;
    cout<<left<<setw(25)<<"Enter Student Name"<<": ";
    cin.ignore(); // Clear buffer before getline
    getline(cin,name); // allows full name with spaces 
    cout<<left<<setw(25)<<"Enter Branch"<<": ";
    cin>>branch;
    cout<<left<<setw(25)<<"Enter Semester"<<": ";
    cin>>sem;
    cout<<left<<setw(25)<<"Enter Mobile Number"<<": ";
    cin>>no;
    // Academic information section
    cout<<"\n--------------------------------------------------------------\n";
    cout<< "Academic Information\n";
    cout<<"-----------------------------------------------------------------\n\n";
    cout << left << setw(35) << "Enter Mathematics Marks" << ": ";
    cin >> m1;
    cout << left << setw(35) << "Enter Physics Marks" << ": ";
    cin>> p1;
    cout << left << setw(35) << "Enter Programming Foundation Marks" << ": ";
    cin>> pf1;


    cout << "\n------------------------------------------------------------\n";
    cout << "Academic Summary\n";
    cout << "------------------------------------------------------------\n\n";
    tm = m1 + p1 + pf1; // Total marks
    avg = tm / 3.0; // Average marks 
    per = avg; // Percentage 
    // Display academic results
    cout << left << setw(25) << "Total Marks" << ": " << tm << endl;
    cout << left << setw(25) << "Average Marks" << ": " << avg << endl;
    cout << left << setw(25) << "Percentage" << ": " << per << endl;
    
    // Display student information summary
    cout << "\n------------------------------------------------------------\n";
    cout << "Student Information";
    cout << "\n------------------------------------------------------------\n";
    cout << left << setw(25) << "Enrollment Number" << ": " << enroll << endl;
    cout << left << setw(25) << "Student Name" << ": " << name << endl;
    cout << left << setw(25) << "Branch" << ": " << branch << endl;
    cout << left << setw(25) << "Semester" << ": " << sem << endl;
    cout << left << setw(25) << "Mobile Number" << ": " << no << endl;
    cout << "\n------------------------------------------------------------\n";
    cout << "                     Academic Result                           ";
    cout << "\n------------------------------------------------------------\n\n";
    // Pass/Fail logic
    if (per>40)
    {
        cout<<left<<setw(25)<<"Result"<<":"<<"pass"<<endl;
    }
    else
    {
        cout<<left<<setw(25)<<"Result"<<":"<<"fail"<<endl;
    }
 return 0; // end of program
}

