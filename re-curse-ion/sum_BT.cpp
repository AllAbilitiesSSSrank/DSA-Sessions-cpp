#include<bits/stdc++.h>
using namespace std;
int a = 0;
void printn(int x , int y )
{ 
    if(x<=0)
    {
        cout<<y;
        return;
    }
    printn(x-1 , y+x);
    
}
int main()
{
    int x;
    cin>>x;
    printn(x , 0);
}
