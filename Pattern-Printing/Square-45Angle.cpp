#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,z;
    bool k=true;
    cin>>x;
    for(int i = 1 ;i<=x ; i++)
    {
        for(int j = 1 ; j<= x-i ;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i = x ;i>=1 ; i--)
    {
        for(int j = x-i ; j>= 1;j--)
        {
            cout<<"  ";
        }
        for(int j=2*i-1;j>=1;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}