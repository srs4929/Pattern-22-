#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        //star
        for(int j=n;j>=i;j--)
        {
            cout<<"*";
        }
        //space
        for(int k=1;k<=(2*i-2);k++)
        {
            cout<<" ";
        }
        //star
        for(int l=n;l>=i;l--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    // next symmetry part
    int space=8;
    for(int m=1;m<=n;m++)
    {
        //star
        for(int o=1;o<=m;o++)
        {
            cout<<"*";
        }
        //space

        for(int i=1;i<=space;i++)
        {
            cout<<" ";
        }
        //star
        for(int j=1;j<=m;j++)
        {
            cout<<"*";
        }
        space=space-2;
        cout<<endl;
    }
}
