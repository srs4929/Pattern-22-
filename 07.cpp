#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cin>>row;

    for(int i=row-1;i>=0;i--)
    {
        //space
        for(int j=0;j<=row-i-1;j++)
        {
            cout<<" ";
        }
        //star
        for(int k=1;k<=(2*i+1);k++)
        {
            cout<<"*";


        }
        //space
        for(int l=0;l<=row-i-1;l++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
