#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin>>x;
    int z;
    cin>>z;
    for(int i=1;i<=z;i++)
    {
        char c = x;
        for(int j=1;j<=i;j++)
        {
            cout<<c;
            c= char(int(c)+1);
        }
        cout<<endl;
    }
}