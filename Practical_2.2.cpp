#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int sem;
    string enroll,name,branch,ints;
    long long no;

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
    cin.ignore();
    getline(cin,name);
    cout<<"Enter Branch :" ;
    cin>>branch;
    cout<<"Enter Semester :" ;
    cin>>sem;
    cout<<"Enter Mobile Number :" ;
    cin>>no;

    cout<<"\n************************************************\n";
    cout<<"              Student Information             ";
    cout<<"\n************************************************\n";
    cout<<left<<setw(25)<< "Enter Enrollment Number"<<":"<<enroll<<endl ;
    cout<<left<<setw(25)<< "Enter Student Name"<<":"<<name<<endl ;
    cout<<left<<setw(25)<< "Enter Branch"<<":"<<branch<<endl ;
    cout<<left<<setw(25)<< "Enter Semester"<<":"<<sem<<endl ;
    cout<<left<<setw(25)<< "Enter Mobile Number"<<":"<<no<<endl ;
    cout<<"\n************************************************\n";

}
