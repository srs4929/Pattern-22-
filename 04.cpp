#include<bits/stdc++.h>
using namespace std;
int main()
{

    int row,coloumn;
    cin>>row>>coloumn;
    for(int i=row;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {cout<<"* ";
        }
        cout<<endl;
    }
}
