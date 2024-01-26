#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,coloumn;
    scanf("%d %d",&row,&coloumn);
    for(int i=1;i<=row;i++)
    {
        for (int j=1;j<=coloumn;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
