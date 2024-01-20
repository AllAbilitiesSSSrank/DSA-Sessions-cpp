#include<bits/stdc++.h>
using namespace std;

void bbsort(int arr[] ,int n)
{
    int s;
  for(int i =n-1;i>=1;i--)
  {
    for(int j = 1 ; j<=i;j++)
    {
        if(arr[j]<arr[j-1])
        {
            s=arr[j-1];
            arr[j-1]=arr[j];
            arr[j] = s;
        }
    }
  }  
}

int main()
{
 int x;
 cin>>x;
 int arr[x];
 for(int i =0;i<x;i++){cin>>arr[i];}
 bbsort(arr,x);
  for(int i =0;i<x;i++){cout<<arr[i];}
}