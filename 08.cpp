#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        //space
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        //star
        for(int k=1;k<=(2*i-1);k++)
        {
            cout<<"*";
        }
        //space
        for(int l=1;l<=n-i;l++)
        {
            cout<<" ";
        }
        //next line
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
       for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        //star
        for(int k=1;k<=(2*i-1);k++)
        {
            cout<<"*";
        }
        //space
        for(int l=1;l<=n-i;l++)
        {
            cout<<" ";
        }
        //next line
        cout<<endl;
    }
}
