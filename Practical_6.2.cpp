#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main()
{
    int n,i,j;
     cout<<"Enter number of participants :";
    cin>>n;
    int total=0, score[10], highest, lowest,t;
    string name[10],id[10],sreID,tn,idn;
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
        average=((float) total/n);
        if (score[i]>highest)
            highest=score[i];
        if (score[i]<lowest)
            lowest=score[i];
    }
    cout<<"Total Score :"<<total<<endl;
    cout<<"Average :"<<average<<endl;
    cout<<"Highest score :"<<highest<<endl;
    cout<<"Lowest score :"<<lowest<<endl;
    cout<<"\n********************************************"<<endl;
    cout<<"     Sports Events Score Analysis"<<endl;
    cout<<"********************************************"<<endl;
    cout<<"Search Participants ID"<<endl;
    cout<<"Enter the Participants ID :";
    cin>>sreID;
    bool found=false;
    for(i=0;i<n;i++)
    {        if(id[i]==sreID)
        {
            cout<<"--------------------------------------"<<endl;
            cout<<"         Participants Found"<<endl;
            cout<<"--------------------------------------"<<endl;
            cout<<setw(10)<<"ID"<<":"<<id[i]<<endl;
            cout<<setw(10)<<"Name"<<":"<<name[i]<<endl;
            cout<<setw(10)<<"Score"<<":"<<score[i]<<endl;
        }

    }
    if(!found)
            {
            cout<<"Participants not found"<<endl;
            }
    cout<<"--------------------------------------"<<endl;
    cout<<"         Ranking list"<<endl;
    cout<<"--------------------------------------"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(score[i]>score[j])
            {
                t=score[i];
                score[i]=score[j];
                score[j]=t;
                tn=name[i];
                name[i]=name[j];
                name[j]=tn;
                idn=id[i];
                id[i]=id[j];
                id[j]=idn;
            }
        }
    }
    cout<<setw(10)<<"Rank"<<setw(10)<<"Name"<<setw(10)<<"Score"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<setw(10)<<(i+1)<<setw(10)<<name[i]<<setw(10)<<score[i]<<endl;
    }
    cout<<"\n--------------------------------------"<<endl;
    cout<<"Top Three Performers"<<endl;
    for(i=0;i<3;i++)
    {
        cout<<(i+1)<<"."<<name[i]<<setw(7)<<"-"<<score[i]<<endl;
    }
    return 0;
}
