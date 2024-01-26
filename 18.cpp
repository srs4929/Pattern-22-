#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //first symmetric part
    int space =8;
    for(int i=1;i<=n;i++)
    {
        //star
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        //space
        for(int k=1;k<=space;k++)
        {
            cout<<" ";
        }
        //star
        for(int l=1;l<=i;l++)
        {
            cout<<"*";
        }
        space=space-2;
        cout<<endl;
    }
    //second symmetry
    int space1=2;
    for(int i=1;i<=(n-1);i++)
    {
        //star
        for(int k=(n-i);k>=1;k--)
        {
            cout<<"*";
        }
        //space
        for(int j=1;j<=space1;j++)
        {
            cout<<" ";
        }
        //star
        for(int l=(n-i);l>=1;l--)
        {
            cout<<"*";
        }
        space1=space1+2;
        cout<<endl;
    }
}
