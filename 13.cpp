#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {    char start='A';
        for(int j=1;j<=i;j++)
        {

            cout<<start;
            start=start+1;
        }
        cout<<endl;
    }
}
