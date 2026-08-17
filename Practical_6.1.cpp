#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i;
     cout<<"Enter number of participants :";
    cin>>n;
    int total=0, score[n], highest, lowest;
    string name[n],id[n];
    float average;

    cout<<"********************************************"<<endl;
    cout<<"     Sports Events Score Analysis"<<endl;
    cout<<"********************************************"<<endl;

    for(i=0;i<n;i++)
    {
        cout<<"Enter Participants ID :";
        cin>>id[i];
        cout<<"Enter Name of Participants :";
        cin>>name[i];
        cout<<"Enter Score :";
        cin>>score[i];
        cout<<endl;

    }
    cout<<"----------------------------------------------\n";
    cout<<"         Participant Performance\n";
    cout<<"----------------------------------------------\n";
    cout<<left<<setw(10)<<"ID"<<left<<setw(15)<<"Name"<<left<<setw(10)<<"Score";
    cout<<"\n-----------------------------------------------\n";
    for(i=0;i<n;i++)
    {
        cout<<left<<setw(10)<<id[i]<<left<<setw(15)<<name[i]<<left<<setw(10)<<score[i];
        cout<<endl;
    }
    cout<<"----------------------------------------------\n";
    for(i=0;i<n;i++)
    {
        total=total+score[i];
        average=((float)average/n);
        if (score[i]>highest)
            highest=score[i];
        if (score[i]<lowest)
            lowest=score[i];
    }
    cout<<"Total Score :"<<total<<endl;
    cout<<"Average :"<<average<<endl;
    cout<<"Highest score :"<<highest<<endl;
    cout<<"Lowest score :"<<lowest<<endl;
}
