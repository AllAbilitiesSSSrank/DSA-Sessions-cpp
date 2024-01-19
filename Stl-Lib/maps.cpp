#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<pair<int,int> , int> mps;
    mps.insert({{1,2} , 5});
    mps[{2,5}] = 2;
    for(auto i : mps)
    {
        cout<<i.first.first<<" " <<i.first.second <<" "<< i.second;
        cout<<endl;
    }
    cout<<mps[{1,2}];
}