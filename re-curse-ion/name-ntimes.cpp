#include<bits/stdc++.h>
using namespace std;
void printn(int n , string s)
{
    if(n > 0)
    {
        cout<<s<<" \n";
        printn(n-1 , s);
    }
}
int main()
{
    int x;
    string s ="something";
    cin>>x;
    printn(x,s);
}
