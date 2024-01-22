#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int>s;
    for(int i = 0 ;i<5;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    for(auto it:s)
    {
        if(s.find(it-1)==s.end())
        {
            cout<<"a";
        }
    }

}