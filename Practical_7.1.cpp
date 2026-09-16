#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main()
{    // Variable declaration
    char enroll[10],name[20],refe[30],branch[4],firstname[10],lastname[10],keyword[20];//1D Arrays 
    int i,j;
    cout<<"********************************************\n";
    cout<<"     STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"********************************************\n";
    //Code for input 
    cout<<"Enter Enrollment Number :";
    cin>>enroll;
    cout<<"Enter Students Name :";
    cin.ignore();
    cin.getline(name,20);
    cout<<"Enter Branch Name :";
    cin>>branch;
    cout<<"\n\n--------------------------------------------\n\n";
    //Copying the name and enroll number in refe for generating refe id
    for(i=0;name[i]!='\0';i++)
    {
        refe[i]=name[i];// Copying name in refe
    }
    refe[i]='-';
    for(j=0,i=i+1;enroll[j]!='\0';i++,j++)
    {
        refe[i]=enroll[j];// Copying enroll number in refe
    }
    refe[i]='\0'; // End for Arrays 
    cout<<"Students Reference\n"<<refe;
    cout<<"\n\n--------------------------------------------\n\n";
    // Code for Separating first name and last name form name 
    for(i=0;name[i]!='\0';i++)
    {
        // Separating first name form name
        if(name[i]==' '||name[i]=='\0')
        {
            break;
        }
        firstname[i]=name[i];
    }
    firstname[i]='\0';
    cout<<"First Name "<<endl;
    cout<<firstname;
    // Separating last name form name
    for(i=i+1,j=0;name[i]!='\0';i++,j++)
    {
        lastname[j]=name[i];
    }
    lastname[j]='\0';
    cout<<endl<<"Last Name "<<endl;
    cout<<lastname;
    cout<<"\n\n--------------------------------------------\n\n";
    // Code for finding keyword match the name 
    cout<<endl<<"Enter Keyword name :"<<endl;
    cin>>keyword; // input of keyword
    if(strstr(name,keyword)==nullptr) // using of string(strstr) and null pointer
    {
        cout<<"keyword not found";
    }
    else
    {
        cout<<"keyword found";
    }
    // Display details of students 
    cout<<"\n\n--------------------------------------------\n\n";
    cout<<"Students Report"<<endl;
    cout<<"Enrollment Number :"<<enroll<<endl;
    cout<<"Students Name :"<<name<<endl;
    cout<<"Branch :"<<branch;
}
