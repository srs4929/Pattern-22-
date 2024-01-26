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
        //character
        char ch='A';
        int breakpoint=(2*i-1)/2;
        for(int k=1;k<=(2*i-1);k++)
        {
            cout<<ch;
           if(k<=breakpoint)ch++;
           else ch--;
        }
        //space
        for(int l=1;l<=(n-i);l++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
