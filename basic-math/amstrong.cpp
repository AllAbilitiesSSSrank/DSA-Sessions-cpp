#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int y = x;
    int i=0 ;
    int ams=0;
    while(y>0)
    { 
      int n = y%10;
      i+=1;
      y= y/10;
    
    }

    y=x;
    
    while(y>0)
    { 
      int n = y%10;
      ams=ams+pow(n,i);
      y= y/10;
    
    }

    if(ams == x)
    {
        cout<<"Amstrong";
    }
    else{
        cout<<"Getlost";
    }
}