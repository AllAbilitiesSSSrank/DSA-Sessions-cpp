#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    bool k=true;
    cin>>x;
    for(int i = 1 ;i<=x ; i++)
    {
        if( i % 2 == 0)
        {
            k = false;
        }
        else{
                k = true;
        }
        
        for(int j =1 ; j<=i ; j++)
        {
            cout<<k;
            k = !k;
        }
        cout<<endl;
    }
}
