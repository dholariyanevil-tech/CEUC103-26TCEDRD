#include<iostream> // For input-output operations
#include<iomanip>  // For formatted output (setw, left, etc.)
using namespace std;

int main()
{
    // Declare variables for student details and marks
    string enroll, name, branch, reg;
    int sem;
    long long no; // Mobile number
    int ch; // Menu Choice
    
    // Flags for validation (p = 0 means student not registered, a = 1 means marks not entered)
    int p = 0, a = 1; 
    
    int n, marks;
    float avg = 0, per = 0, total = 0; 

    // Display system header
    cout<<"*****************************************************************\n";
    cout<<"             STUDENT RECORD MANAGEMENT SYSTEM                    \n";
    cout<<"*****************************************************************\n";
    
    // Main menu loop
    do
    {
    m:  cout<<"\n------------------MAIN MENU--------------------------\n";
        cout<<" 1. Register New Student \n 2. Display Student Record \n 3. Enter Student Marks \n 4. Display Academic Result \n 5. Exit \n"<<endl;
        cout<<left<<setw(25)<<"Enter Your Choice "<<":";
        cin>> ch;

        // Using switch statement instead of if-else ladder for menu choices
        switch (ch)
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
                getline(cin, name); // Full name with spaces
                cout<<left<<setw(25)<<"Enter Branch"<<": ";
                cin>>branch;
                cout<<left<<setw(25)<<"Enter Semester"<<": ";
                cin>>sem;
                cout<<left<<setw(25)<<"Enter Mobile Number"<<": ";
                cin>>no;

                cout<<"\nStudent Registered Successfully.\n";
                cout<<"-----------------------------------------------------------------\n";
                cout<<left<<setw(30)<<"Register for Another Students? "<<"(Y/N) :";
                cin>>reg;
                cout<<"-----------------------------------------------------------------\n\n";
                
                p = 1; // Mark student as registered

                while (reg == "Y" || reg == "y")
                {
                    cout<<left<<setw(25)<<"Enter Enrollment Number"<<": ";
                    cin>>enroll;
                    cout<<left<<setw(25)<<"Enter Student Name"<<": ";
                    cin.ignore(); // Clear buffer
                    getline(cin, name);
                    cout<<left<<setw(25)<<"Enter Branch"<<": ";
                    cin>>branch;
                    cout<<left<<setw(25)<<"Enter Semester"<<": ";
                    cin>>sem;
                    cout<<left<<setw(25)<<"Enter Mobile Number"<<": ";
                    cin>>no;
                    cout<<"\nStudent Registered Successfully.\n";
                    cout<<"-----------------------------------------------------------------\n";
                    cout<<left<<setw(30)<<"Register for Another Students? "<<"(Y/N) :";
                    cin>>reg;
                    cout<<"-----------------------------------------------------------------\n\n";
                }
                break;
            }

            case 2: // Option 2: Display student record
            {
                if (p == 0)
                {
                    cout << "You have not uploaded student details yet." << endl;
                }
                else
                {
                    cout << "\n------------------------------------------------------------\n";
                    cout << "                   Student Information\n";
                    cout << "------------------------------------------------------------\n";
                    cout << left << setw(25) << "Enrollment Number" << ": " << enroll << endl;
                    cout << left << setw(25) << "Student Name" << ": " << name << endl;
                    cout << left << setw(25) << "Branch" << ": " << branch << endl;
                    cout << left << setw(25) << "Semester" << ": " << sem << endl;
                    cout << left << setw(25) << "Mobile Number" << ": " << no << endl;
                    cout << "-----------------------------------------------------------------\n";
                }
                break;
            }

            case 3: // Option 3: Enter student marks
            {
                cout<<"\n--------------------------------------------------------------\n";
                cout<<"                Academic Information                         \n";
                cout<<"-----------------------------------------------------------------\n";
                cout<<"Enter Number of Subjects : ";
                cin >> n;
                
                total = 0; // Reset total for fresh calculation
                for(int i = 1; i <= n; i++)
                {
                    cout << "Enter Marks of Subject " << i << ": ";
                    cin >> marks;
                    total += marks;
                }
                cout << "Marks Entered Successfully.\n";
                cout<<"-----------------------------------------------------------------\n";
                
                a = 0; // Mark that academic details have been uploaded
                break;
            }

            case 4: // Option 4: Display academic result
            {
                if (a == 1) // Fixed assignment operator bug (= to ==)
                {
                    cout << "You have not uploaded Academic details yet." << endl;
                }
                else
                {
                    cout << "\n------------------------------------------------------------\n";
                    cout << "                   Academic Summary                         \n";
                    cout << "------------------------------------------------------------\n";

                    avg = total / n;
                    per = avg; // Assuming max marks per subject is out of 100

                    cout << left << setw(25) << "Total Marks" << ": " << total << endl; 
                    cout << left << setw(25) << "Average Marks" << ": " << avg << endl; 
                    cout << left << setw(25) << "Percentage" << ": " << per << "%" << endl; 

                    cout << "\n------------------------------------------------------------\n";
                    cout << "               Academic Result\n";
                    cout << "-----------------------------------------------------------------\n";
                    
                    // Pass/Fail logic
                    if (per >= 40)
                    {
                        cout << left << setw(25) << "Result" << ":" << "Pass" << endl;
                    }
                    else
                    {
                        cout << left << setw(25) << "Result" << ":" << "Fail" << endl;
                    }

                    // Grading system (fixed overlapping conditions)
                    if (per >= 90)
                    {
                        cout << left << setw(25) << "Grade" << ":" << "O" << endl;
                        cout << left << setw(25) << "Performance" << ":" << "Outstanding" << endl;
                    }
                    else if (per >= 80)
                    {
                        cout << left << setw(25) << "Grade" << ":" << "A+" << endl;
                        cout << left << setw(25) << "Performance" << ":" << "Excellent" << endl;
                    }
                    else if (per >= 70)
                    {
                        cout << left << setw(25) << "Grade" << ":" << "A" << endl;
                        cout << left << setw(25) << "Performance" << ":" << "Very Good" << endl;
                    }
                    else if (per >= 60)
                    {
                        cout << left << setw(25) << "Grade" << ":" << "B+" << endl;
                        cout << left << setw(25) << "Performance" << ":" << "Good" << endl;
                    }
                    else if (per >= 50)
                    {
                        cout << left << setw(25) << "Grade" << ":" << "B" << endl;
                        cout << left << setw(25) << "Performance" << ":" << "Satisfactory" << endl;
                    }
                    else if (per >= 40)
                    {
                        cout << left << setw(25) << "Grade" << ":" << "C" << endl;
                        cout << left << setw(25) << "Performance" << ":" << "Needs Improvement" << endl;
                    }
                    else
                    {
                        cout << left << setw(25) << "Grade" << ":" << "F" << endl;
                        cout << left << setw(25) << "Performance" << ":" << "Failed" << endl;
                    }
                    cout << "\n------------------------------------------------------------\n";
                }
                break;
            }

            case 5: // Option 5: Exit
            {
                cout << "Thank You...\n"; 
                break;
            }

            default: // Handle invalid choices
            {
                cout << "Invalid input. Please choose between 1 and 5." << endl;
                break;
            }
        }

    } while (ch != 5);

    return 0;
}
