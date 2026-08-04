#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    string enroll,name,branch,pass,fail;
    int sem,m1,p1,pf1,tm;
    float avg,per;
    long long no;

    cout<<"*****************************************************************\n";
    cout<<                " STUDENT RECORD MANAGEMENT SYSTEM                \n";
    cout<<"*****************************************************************\n\n";
    cout<<                  "Software version : 1.2\n\n";
    cout<<"-----------------------------------------------------------------\n";
    cout<<                  "Student Registration                           \n";
    cout<<"-----------------------------------------------------------------\n\n";
    cout<<left<<setw(25)<<"Enter Enrollment Number"<<": ";
    cin>>enroll;
    cout<<left<<setw(25)<<"Enter Student Name"<<": ";
    cin.ignore();
    getline(cin,name);
    cout<<left<<setw(25)<<"Enter Branch"<<": ";
    cin>>branch;
    cout<<left<<setw(25)<<"Enter Semester"<<": ";
    cin>>sem;
    cout<<left<<setw(25)<<"Enter Mobile Number"<<": ";
    cin>>no;

    cout<<"\n--------------------------------------------------------------\n";
    cout<<                  "Academic Information                           \n";
    cout<<"-----------------------------------------------------------------\n\n";
    cout << left << setw(35) << "Enter Mathematics Marks" << ": ";
    cin >> m1;
    cout << left << setw(35) << "Enter Physics Marks" << ": ";
    cin>> p1;
    cout << left << setw(35) << "Enter Programming Foundation Marks" << ": ";
    cin>> pf1;




    cout << "\n------------------------------------------------------------\n";
    cout <<                     "Academic Summary                          \n";
    cout << "------------------------------------------------------------\n\n";
    tm = m1 + p1 + pf1;
    avg = tm / 3.0;
    per = avg;

    cout << left << setw(25) << "Total Marks" << ": " << tm << endl;
    cout << left << setw(25) << "Average Marks" << ": " << avg << endl;
    cout << left << setw(25) << "Percentage" << ": " << per << endl;

    cout << "\n------------------------------------------------------------\n";
    cout <<                     "Student Information                       \n";
    cout << "------------------------------------------------------------\n\n";

    cout << left << setw(25) << "Enrollment Number" << ": " << enroll << endl;
    cout << left << setw(25) << "Student Name" << ": " << name << endl;
    cout << left << setw(25) << "Branch" << ": " << branch << endl;
    cout << left << setw(25) << "Semester" << ": " << sem << endl;
    cout << left << setw(25) << "Mobile Number" << ": " << no << endl;
    cout<<"\n--------------------------------------------------------------\n";
    cout<<                       "Academic result                           \n";
    cout<<"-----------------------------------------------------------------\n\n";

if  (per>40)
    {
         cout<<left<<setw(25)<< "Result"<< ": "<<"pass"<<endl;
    }
else
    {
         cout<<left<<setw(25)<< "Result"<< ": "<<"fail"<<endl;
    }

if (per>90)
{
    cout<<left<<setw(25)<<"Grade"<< ": "<<"O"<<endl;
    cout<<left<<setw(25)<<"Performance"<< ": "<<"Outstanding"<<endl;
}
else if (per>80)
{
    cout<<left<<setw(25)<<"Grade"<< ": "<<"A+"<<endl;
    cout<<left<<setw(25)<<"Performance"<< ": "<<"Excellent"<<endl;
}
else if (per>70)
{
    cout<<left<<setw(25)<<"Grade"<< ": "<<"A"<<endl;
    cout<<left<<setw(25)<<"Performance"<< ": "<<"Very Good"<<endl;
}
else if (per>60)
{
    cout<<left<<setw(25)<<"Grade"<< ": "<<"B+"<<endl;
    cout<<left<<setw(25)<<"Performance"<< ": "<<"Good"<<endl;
}
else if (per>50)
{
    cout<<left<<setw(25)<<"Grade"<< ": "<<"B"<<endl;
    cout<<left<<setw(25)<<"Performance"<< ": "<<"Satisfactory"<<endl;
}
else if (per>40)
{
    cout<<left<<setw(25)<<"Grade"<< ": "<<"C"<<endl;
    cout<<left<<setw(25)<<"Performance"<< ": "<<"Needs Improvement"<<endl;
}
else
{
    cout<<left<<setw(25)<<"Grade"<< ": "<<"F"<<endl;
    cout<<left<<setw(25)<<"Performance"<< ": "<<"Failed"<<endl;
}
    cout<<"\n--------------------------------------------------------------\n";}
