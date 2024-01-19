#include<bits/stdc++.h>
using namespace std;
int x = 0;
void printn(int n )
{ x +=1;
    if(x<=n)
    {
        cout<<x<<" \n";
        printn(n);
    }
}
int main()
{
    int x;
    cin>>x;
    printn(x);
}
