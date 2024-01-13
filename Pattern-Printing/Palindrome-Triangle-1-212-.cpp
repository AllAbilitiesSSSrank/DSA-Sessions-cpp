#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,z;
    bool k=true;
    cin>>x;
    for(int i = 1 ;i<=x ; i++)
    {
        k = false;
        z=i;
        for(int j = 1 ; j<= x-i ;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            if(z==1)
            {
                k=true;
            }
            if(!k)
            {
                cout<<z;
                z--;
            }
            else{
                cout<<z;
                z++;
            }
        }
        cout<<endl;
    }
}