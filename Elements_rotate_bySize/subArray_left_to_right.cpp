#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[10] ={1,2,3,4,5,6,7,8,9,10};
    int temp[10];
    int s ;
    cin>>s;
    for(int i=0;i<s;i++)
    {
        temp[i] = x[i];
    }
    for(int i = s ;i<10;i++)
    {
        x[i-s] = x[i];
    }
    for(int i = 10-s ; i<10 ; i++){
        x[i] = temp[i-10+s];
    }
    for(int i:x)
    {
        cout<<i;
    }

}
