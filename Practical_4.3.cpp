#include<iostream> // For input-output operations 
#include<iomanip> // For formatted output (setw, left, etc.)
using namespace std;
int main()
{
        // Declare variable for student details and marks
        string enroll,name,branch;
        int sem,m1,p1,pf1,tm; // sem = semester, m1 = math marks, p1 = physics, pf1 = programming foundation marks, tm = total marks
        float avg,per; // avg = average marks, per = percentage
        long long no; // Mobile number
        int ch; // Menu Choice 
        // Display system header
        cout<<"*****************************************************************\n";
        cout<<"              STUDENT RECORD MANAGEMENT SYSTEM                   \n";
        cout<<"*****************************************************************\n";
        // Main menu loop 
        cout<<"\n------------------MAIN MENU--------------------------\n";
        m:cout<<" 1.Register New Student \n 2.Display Student Record \n 3.Enter Student Marks \n 4.Display Academic Result \n 5.Exit \n"<<endl;
        cout<<left<<setw(25)<<"Enter Your Choice "<<":";
        cin>> ch;
        // Validate menu choice
        if (ch<1 || ch>5)
        {
                cout<<"Invalid input"<<endl;
                goto m; // Go back to menu 
        }
        swtich (ch) // Based on the value of 'choice', execute the corresponding case
        {
        case 1: // Option 1: Register new student
        {
        cout<<"-----------------------------------------------------------------\n";
        cout<<"                Student Registration\n";
        cout<<"-----------------------------------------------------------------\n\n";
        cout<<left<<setw(25)<<"Enter Enrollment Number"<<": ";
        cin>>enroll;
        cout<<left<<setw(25)<<"Enter Student Name"<<": ";
        cin.ignore(); // Clear buffer
        getline(cin,name); // Full name with spaces
        cout<<left<<setw(25)<<"Enter Branch"<<": ";
        cin>>branch;
        cout<<left<<setw(25)<<"Enter Semester"<<": ";
        cin>>sem;
        cout<<left<<setw(25)<<"Enter Mobile Number"<<": ";
        cin>>no;
        cout<<"\nStudent Registered Successfully.\n";
        cout<<"-----------------------------------------------------------------\n";
        goto m;
        }
        case 2: // Option 2: Display student record
        {
        cout << "\n------------------------------------------------------------\n";
        cout << "                   Student Information\n";
        cout << "------------------------------------------------------------\n";


        cout << left << setw(25) << "Enrollment Number" << ": " << enroll << endl;
        cout << left << setw(25) << "Student Name" << ": " << name << endl;
        cout << left << setw(25) << "Branch" << ": " << branch << endl;
        cout << left << setw(25) << "Semester" << ": " << sem << endl;
        cout << left << setw(25) << "Mobile Number" << ": " << no << endl;
        cout<<"-----------------------------------------------------------------\n";
        goto m;

        }
        case 3: // Option 3: Enter student marks
        {
        cout<<"\n--------------------------------------------------------------\n";
        cout<<"                Academic Information                             \n";
        cout<<"-----------------------------------------------------------------\n";
        cout << left << setw(35) << "Enter Mathematics Marks" << ": ";
        cin >> m1;
        cout << left << setw(35) << "Enter Physics Marks" << ": ";
        cin>> p1;
        cout << left << setw(35) << "Enter Programming Foundation Marks" << ": ";
        cin>> pf1;
        cout << "Marks Entered Successfully.\n";
        cout<<"-----------------------------------------------------------------\n";
        goto m;
        }
        case 4: // Option 4: Display academic result 
        {
        cout << "\n------------------------------------------------------------\n";
        cout << "                   Academic Summary                          \n";
        cout << "------------------------------------------------------------\n";
        tm = m1 + p1 + pf1;
        avg = tm / 3.0;
        per = avg;
        cout << left << setw(25) << "Total Marks" << ": " << tm << endl; // Total marks
        cout << left << setw(25) << "Average Marks" << ": " << avg << endl; // Average marks
        cout << left << setw(25) << "Percentage" << ": " << per << endl; // Percentage
        cout << "\n------------------------------------------------------------\n";
        cout<< "               Academic Result\n";
        cout<<"-----------------------------------------------------------------\n";
        // Pass/Fail logic 
        if (per >=40)
        {
                cout << left << setw(25) << "Result"<<":"<<"Pass"<<endl;
        }
        else
        {
                cout << left << setw(25) << "Result"<<":"<<"Fail"<<endl;
        }
        // Grading system
        if (per >=90)
        {
                cout<<left<< setw(25)<<"Grade"<<":"<<"O"<<endl;
                cout<<left<<setw(25)<<"Performance"<<":"<<"Outstanding"<<endl;
        }
        else if (per >=80 || per <=89)
        {      
                cout<<left<< setw(25)<<"Grade"<<":"<<"A+"<<endl;
                cout<<left<<setw(25)<<"Performance"<<":"<<"Excellent"<<endl;
        }
        else if (per >=70 || per <=79)
        {
                cout<<left<< setw(25)<<"Grade"<<":"<<"A"<<endl;
                cout<<left<<setw(25)<<"Performance"<<":"<<"Very Good"<<endl;
        }
        else if (per >=60 || per <=69)
        {
                cout<<left<< setw(25)<<"Grade"<<":"<<"B+"<<endl;
                cout<<left<<setw(25)<<"Performance"<<":"<<"Good"<<endl;
        }
        else if (per >=50 || per <=59)
        {
                cout<<left<< setw(25)<<"Grade"<<":"<<"B"<<endl;
                cout<<left<<setw(25)<<"Performance"<<":"<<"Satisfactory"<<endl;
        }
        else if (per >=40 || per <= 49)
        {
                cout<<left<< setw(25)<<"Grade"<<":"<<"C"<<endl;
                cout<<left<<setw(25)<<"Performance"<<":"<<"Needs Improvement"<<endl;
        }
        else
    {
        cout<<left<< setw(25)<<"Grade"<<":"<<"F"<<endl;
        cout<<left<<setw(25)<<"Performance"<<":"<<"Failed"<<endl;
    }
        cout<<"\n------------------------------------------------------------\n";
    }

        
    {
    cout<<"Thank You..."; // end of program
    }

}
}
