#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter number of participants :";
    cin>>n;

    // Variables for scores, totals, highest/lowest, and temporary swaps
    int total=0, score[10], highest, lowest,t,l=0;
    string name[10],id[10],sreID,tn,idn;
    float average;
    
    // Title banner
    cout<<"********************************************"<<endl;
    cout<<"     Sports Events Score Analysis"<<endl;
    cout<<"********************************************"<<endl;

    // Input participant details
    for(i=0;i<n;i++)
    {
        cout<<"Enter Participants ID :";
        cin>>id[i];
        cout<<"Enter Name of Participants :";
        cin>>name[i];
        cout<<"Enter Score :";
        cin>>score[i];
        cout<<endl;
        l=1; // mark that participants were entered
    }

    // Display participant performance table
    // If no participants entered
    if(l==0)
    {
        cout<<"Please Enter Details of Participant"
    }
    // If participants exist, display performance
    if(l==1)
    {
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
    
    // Calculate totals, average, highest, lowest
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
    }
    // Search for Participant 
    cout<<"\n********************************************"<<endl;
    cout<<"     Sports Events Score Analysis"<<endl;
    cout<<"********************************************"<<endl;
    cout<<"Search Participant ID"<<endl;
    cout<<"Enter the Participant ID :";
    cin>>sreID;
    bool found=false; // Marks for checking wheather Participant exist or not
    for(i=0;i<n;i++)
    {        if(id[i]==sreID) // Participant exist
        {
            cout<<"--------------------------------------"<<endl;
            cout<<"         Participant Found"<<endl;
            cout<<"--------------------------------------"<<endl;
            cout<<setw(10)<<"ID"<<":"<<id[i]<<endl;
            cout<<setw(10)<<"Name"<<":"<<name[i]<<endl;
            cout<<setw(10)<<"Score"<<":"<<score[i]<<endl;
            found=true; // Marks for Participant exist
        }

    }
    // Marks of checking if Participant do not exist
    if(!found)
            {
            cout<<"Participants not found"<<endl;
            }
    
    // Ranking list (bubble sort style)
    cout<<"--------------------------------------"<<endl;
    cout<<"         Ranking list"<<endl;
    cout<<"--------------------------------------"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(score[i]>score[j])
            {
                // Code for Swap scores
                t=score[i];
                score[i]=score[j];
                score[j]=t;
                
                // Swap names
                tn=name[i];
                name[i]=name[j];
                name[j]=tn;

                // Swap IDs
                idn=id[i];
                id[i]=id[j];
                id[j]=idn;
            }
        }
    }
    // Display ranking
    cout<<setw(10)<<"Rank"<<setw(10)<<"Name"<<setw(10)<<"Score"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<setw(10)<<(i+1)<<setw(10)<<name[i]<<setw(10)<<score[i]<<endl;
    }

    // Display top three performers
    cout<<"\n--------------------------------------"<<endl;
    cout<<"Top Three Performers"<<endl; 
    for(i=0;i<3;i++)// ensure n>=3
    {
        cout<<(i+1)<<"."<<name[i]<<setw(7)<<"-"<<score[i]<<endl;
    }
    return 0;
}
