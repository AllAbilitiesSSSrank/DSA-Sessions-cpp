#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.emplace_back(5);
    v.push_back(1);
    for (vector<int>::iterator it = v.begin();it != v.end() ; it++)
    {
        cout<<*(it)<<" ";
    }
    
    cout<<endl;
    vector<int> c(2,10);//{10,10}
    
    v.insert(v.begin(), c.begin() , c.end());
    for(auto i : v)
    {
        cout<<i<<" ";
    }
}