
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(char start='E'-i+1;start<='E';start++)
        {
            cout<<start;
        }
        cout<<endl;
    }
}
