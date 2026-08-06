#include<iostream> // for input-output operations
#include<iomanip> // for formatted output (setw,left,...)
using namespace std;
int main()
{
    // Declare variables to store student details
    int sem;
    string enroll,name,branch,ints;
    long long no;
    // Display  system header
    cout<<"\n************************************************\n";
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM";
    cout<<"\n************************************************\n\n";\

    cout<<"Institute :" ;
    cin>>ints;
    cout<<"\n************************************************\n";
    cout<<"               Student Registration                ";
    cout<<"\n************************************************\n\n";

    cout<<"Enter Enrollment Number :" ;
    cin>>enroll;
    cout<<"Enter Student Name :" ;
    cin.ignore(); // clear buffers before getline 
    getline(cin,name); // Allows full name with spaces
    cout<<"Enter Branch :" ;
    cin>>branch;
    cout<<"Enter Semester :" ;
    cin>>sem;
    cout<<"Enter Mobile Number :" ;
    cin>>no;
    // Display student information neatly formatted
    cout<<"\n************************************************\n";
    cout<<"              Student Information             ";
    cout<<"\n************************************************\n";
    // setw (25) for proper aligment
    cout<<left<<setw(25)<< "Enter Enrollment Number"<<":"<<enroll<<endl ;
    cout<<left<<setw(25)<< "Enter Student Name"<<":"<<name<<endl ;
    cout<<left<<setw(25)<< "Enter Branch"<<":"<<branch<<endl ;
    cout<<left<<setw(25)<< "Enter Semester"<<":"<<sem<<endl ;
    cout<<left<<setw(25)<< "Enter Mobile Number"<<":"<<no<<endl ;
    cout<<"\n************************************************\n";
    return 0; // end of porgram 

}
