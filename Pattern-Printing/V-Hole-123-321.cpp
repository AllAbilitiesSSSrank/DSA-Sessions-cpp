#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int i =1 ; i<=x ; i++)
    {
        for(int j = 1 ; j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(int j = 1; j<=x-i;j++)
        {
            cout<<"  ";
        }
        for(int j = 1; j<=x-i;j++)
        {
            cout<<"  ";
        }
        for(int j = i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}