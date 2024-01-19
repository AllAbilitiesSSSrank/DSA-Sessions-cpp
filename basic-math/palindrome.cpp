#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int y = x;
    int i ;
    int rev;
    while(y>0)
    { 
      int n = y%10;
      rev = (rev*10)+n;
      y= y/10;
    
    }
    if(rev == x)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"Getlost";
    }
}