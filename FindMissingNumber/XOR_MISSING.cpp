#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[9] ={1,2,3,4,5,6,8,9,10};
    int xr = 0;
    int xr1=0;
    for(int i = 0 ; i <9 ; i++)
    {
        xr = xr^x[i];
        xr1 = xr1^(i+1);
    }
    xr1 = xr1^10;
    xr1 = xr1^xr;
    
    cout<<xr1;
}