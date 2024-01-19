#include<bits/stdc++.h>
using namespace std;
int x = 0;
void printn(int n )
{ 
    if(n<=0)
    {
        return ;
    }
    printn(n-1);
    cout<<n<<endl;
}
int main()
{
    int x;
    cin>>x;
    printn(x);
}
