#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x[10] ={0,0,3,1,0,5,0,0,2,1};
    int z=0,y=0;
    for(int i = 0 ; i<10;i++)
    {
        if(x[i]!=0)
        {
            x[y] = x[z];
            y++;
            z++;
        }else{
            z++;
        }
    }
    for(int i = y ; i<10;i++)
    {
        x[i]= 0;
    }
    for(int i:x)
    {
        cout<<i<<" ";
    }
}