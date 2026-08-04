#include<iostream>
using namespace std;
int main()
{
    int sem;
    string enroll,name,branch;
    long long no;

    cout<<"\n************************************************\n";
    cout<<"      STUDENT RECORD MANAGEMENT SYSTEM          ";
    cout<<"\n************************************************\n\n";
    cout<<"Enter Enrollment Number : ";
    cin>>enroll;
    cout<<"Enter Student Name : ";
    cin>>name;
    getline(cin,name);
    cout<<"Enter Branch : ";
    cin>>branch;
    cout<<"Enter Semester : ";
    cin>>sem;
    cout<<"Enter Mobile Number : ";
    cin>>no;

    cout<<"\n------------------------------------------\n";
    cout<<"Student Information";
    cout<<"\n------------------------------------------\n";
    cout<<"Enrollment Number :"<<enroll<<endl;
    cout<<"Student Name :"<<name<<endl;
    cout<<"Branch :"<<branch<<endl;
    cout<<"Semester :"<<sem<<endl;
    cout<<"Mobile Number :"<<no<<endl;
    cout<<"\n------------------------------------------\n";

}
