#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cin>>row;
    for(int i=0;i<row;i++)
    {
        //space
        for(int j=0;j<row-i-1;j++)
        {
            cout<<" ";
        }
        //star
        for(int k=0;k<(2*i+1);k++)
        {
            cout<<"*";
        }
        //space
        for(int m=0;m<row-i-1;m++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
