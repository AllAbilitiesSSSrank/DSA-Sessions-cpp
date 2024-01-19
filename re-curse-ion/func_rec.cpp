#include<bits/stdc++.h>
using namespace std;
int a = 0;
int printn(int x  )
{ 
    if ( x == 0)
    {
        return 0;
    }
    return x + printn(x-1);
    
}
int main()
{
    int x;
    cin>>x;
    cout << printn(x);
}
