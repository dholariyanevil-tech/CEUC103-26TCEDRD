#include<iostream> // Include input-output stream library
using namespace std; // Use Standard namespace
int main()
{
    //declare variable to store student details
    int sem;
    string enroll,name,branch;
    long long no;
    //display header
    cout<<"\n************************************************\n";
    cout<<"      STUDENT RECORD MANAGEMENT SYSTEM          ";
    cout<<"\n************************************************\n\n";
    cout<<"Enter Enrollment Number : ";
    cin>>enroll;
    cout<<"Enter Student Name : ";
    cin>>name;
    getline(cin,name); //to handle full name with spaces
    cout<<"Enter Branch : ";
    cin>>branch;
    cout<<"Enter Semester : ";
    cin>>sem;
    cout<<"Enter Mobile Number : ";
    cin>>no;
    // display students information
    cout<<"\n------------------------------------------\n";
    cout<<"Student Information";
    cout<<"\n------------------------------------------\n";
    cout<<"Enrollment Number :"<<enroll<<endl;
    cout<<"Student Name :"<<name<<endl;
    cout<<"Branch :"<<branch<<endl;
    cout<<"Semester :"<<sem<<endl;
    cout<<"Mobile Number :"<<no<<endl;
    cout<<"\n------------------------------------------\n";
    return 0; // end of program

}
