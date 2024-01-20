#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int arr[x] ;
    for(int i =0;i<x;i++)
    {
        cin>>arr[i];
    }
    int H[8] = {0};
    for(int i =0;i<x;i++)
    {
        H[arr[i]] +=1;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        cout<<H[num]<<endl;
    }

}