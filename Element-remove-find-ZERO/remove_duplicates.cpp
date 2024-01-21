#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z=0;
    vector<int>t;
    cin>>x;
    for(int i = 0 ;i<x;i++){
        cin>>y;
        t.push_back(y);
    }
    for(int j =1 ; j<x;j++)
    {
        if(t[j] !=t[z] ){
            t[z+1] = t[j];
            z++;
        }
    }
    for(auto i : t)
    {
        cout<<i;
    }
}