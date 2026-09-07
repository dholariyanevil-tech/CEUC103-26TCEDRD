#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    // Part A-Matrix Multiplication
    int A[3][3],B[3][3],C[3][3],n1,n2,n3;
    int i=0,j=0,k=0,arr1[n1],arr2[n2],arr3[n3];
    cout<<"********************************************"<<endl;
    cout<<"         MATRIX MULTIPICATION"<<endl;
    cout<<"********************************************"<<endl;
    //Code for Input of First Matrix
    cout<<"Enter First Matrix (3X3):\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>A[i][j];

        }
    }
    //Code for Input of Second Matrix
    cout<<"Enter Second Matrix (3X3):\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>B[i][j];
        }
    }
    //Code for Addition of two Matrix
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
             C[i][j]=0;
             for(k=0; k<3; k++)
             {
                 C[i][j]+=A[i][k]*B[k][j];
             }
        }
    }
    //Display First Matrix
    cout<<"First Matrix\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    //Display Second Matrix
    cout<<"Second Matrix\n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"------------------------------------------\n";
    // Display Resultant Matrix
    cout << "Resultant Matrix\n";
    for(int i=0; i<3; i++)
        {
        for(int j=0; j<3; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    // Part B: Merge Sorted Arrays
    cout<<"\nEnter size of first sorted array: ";
    cin>>n1;
    cout<<"Enter elements of first sorted array:\n";
    for(int i=0; i<n1; i++)
        cin >> arr1[i];

    cout<<"Enter size of second sorted array: ";
    cin>>n2;

    cout<<"Enter elements of second sorted array:\n";
    for(int i=0; i<n2; i++)
        cin >> arr2[i];
    // Merge process
    while(i<n1 && j<n2)
    {
        if(arr1[i] < arr2[j]) arr3[k++] = arr1[i++];
        else arr3[k++] = arr2[j++];
    }
    while(i<n1) arr3[k++] = arr1[i++];
    while(j<n2) arr3[k++] = arr2[j++];

    // Display arrays
    cout << "\nFirst Array: ";
    for(int i=0; i<n1; i++)
        cout << arr1[i] << " ";

    cout << "\nSecond Array: ";
    for(int i=0; i<n2; i++)
        cout << arr2[i] << " ";

    cout << "\nMerged Sorted Array: ";
    for(int i=0; i<n1+n2; i++)
        cout << arr3[i] << " ";

    return 0;
}


