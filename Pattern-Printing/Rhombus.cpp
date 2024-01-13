#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    bool k=true;
    cin>>x;
    for(int i = 1 ;i<=x ; i++)
    {   
    for(int j = 1 ; j <= x-i ; j++)
    {
        cout<<"  ";
    }
        for(int j =1 ; j<=x ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}