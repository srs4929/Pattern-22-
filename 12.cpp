#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num=1;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<num<<" ";
           num= num+1;
        }
        cout<<endl;
    }
}
