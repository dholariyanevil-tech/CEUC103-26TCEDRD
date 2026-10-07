#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j,n,m,o,p,q,r;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%5==1)
                cout<<"1";
            else if(j%5==2)
                cout<<"2";
            else if(j%5==3)
                cout<<"3";
            else if(j%5==4)
                cout<<"4";
            else
                cout<<"5";
        }
        cout<<endl;
    }
    //
    cin>>m;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%5==1)
                cout<<"a";
            else if(j%5==2)
                cout<<"b";
            else if(j%5==3)
                cout<<"c";
            else if(j%5==4)
                cout<<"d";
            else
                cout<<"e";
        }
        cout<<endl;
    }
    cin>>o;
    for(i=1;i<=o;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%5==1)
                cout<<"A";
            else if(j%5==2)
                cout<<"B";
            else if(j%5==3)
                cout<<"C";
            else if(j%5==4)
                cout<<"D";
            else
                cout<<"E";
        }
        cout<<endl;
    }
    cin>>p;
    for(i=1;i<=p;i++)
    {
        // print spaces first
        for(j=1;j<=p-i;j++)
        {
            cout<<"  ";  // two spaces for alignment
        }
        // then print numbers
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cin>>q;
    for(i=1; i<=q; i++)
    {
        // spaces
        for(j=1; j<=q-i; j++)
        {
            cout << " ";
        }

        // increasing numbers
        for(j=1; j<=i; j++)
        {
            cout << j << " ";
        }

        // decreasing numbers
        for(j=i-1; j>=1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cin>>r;
    for(i=1; i<=r; i++)
    {
        // spaces
        for(j=1; j<=r-i; j++)
        {
            cout << " ";
        }

        // increasing alphabets
        for(j=1; j<=i; j++)
        {
            cout << char('A' + j - 1) << " ";
        }

        // decreasing alphabets
        for(j=i-1; j>=1; j--)
        {
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }
    return 0;
}
