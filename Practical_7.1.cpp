#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main()
{
    char enroll[10],name[20],refe[30],branch[4],firstname[10],lastname[10],keyword[20];
    int i,j;
    cout<<"********************************************\n";
    cout<<"     STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"********************************************\n";
    cout<<"Enter Enrollment Number :";
    cin>>enroll;
    cout<<"Enter Students Name :";
    cin.ignore();
    cin.getline(name,20);
    cout<<"Enter Branch Name :";
    cin>>branch;
    cout<<"\n\n--------------------------------------------\n\n";
    for(i=0;name[i]!='\0';i++)
    {
        refe[i]=name[i];
    }
    refe[i]='-';
    for(j=0,i=i+1;enroll[j]!='\0';i++,j++)
    {
        refe[i]=enroll[j];
    }
    refe[i]='\0';

    cout<<"Students Reference\n"<<refe;
    cout<<"\n\n--------------------------------------------\n\n";
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]==' '||name[i]=='\0')
        {
            break;
        }
        firstname[i]=name[i];
    }
    firstname[i]='\0';
    cout<<"First Name "<<endl;
    cout<<firstname;
    for(i=i+1,j=0;name[i]!='\0';i++,j++)
    {
        lastname[j]=name[i];
    }
    lastname[j]='\0';
    cout<<endl<<"Last Name "<<endl;
    cout<<lastname;
    cout<<"\n\n--------------------------------------------\n\n";
    cout<<endl<<"Enter Keyword name :"<<endl;
    cin>>keyword;
    if(strstr(name,keyword)==nullptr)
    {
        cout<<"keyword not found";
    }
    else
    {
        cout<<"keyword found";
    }
    cout<<"\n\n--------------------------------------------\n\n";
    cout<<"Students Report"<<endl;
    cout<<"Enrollment Number :"<<enroll<<endl;
    cout<<"Students Name :"<<name<<endl;
    cout<<"Branch :"<<branch;
}
