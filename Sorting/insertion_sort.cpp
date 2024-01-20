#include<bits/stdc++.h>
using namespace std;

void inssort(int arr[] ,int n)
{
    int j,s;
  for(int i=1;i<=n-1;i++)
  {
    j=i;
    while(j>0 && arr[j-1]>arr[j])
    {
        s=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=s;
        j--;
    }
    
  }  
}

int main()
{
 int x;
 cin>>x;
 int arr[x];
 for(int i =0;i<x;i++){cin>>arr[i];}
 inssort(arr,x);
  for(int i =0;i<x;i++){cout<<arr[i];}
}