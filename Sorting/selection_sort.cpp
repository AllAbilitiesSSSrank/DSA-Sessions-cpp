#include<bits/stdc++.h>
using namespace std;

void selectionsort(int arr[] ,int n)
{
    int s;
  for(int i =0;i<n;i++)
  {
    for(int j = i+1 ; j<n;j++)
    {
        if(arr[i]>arr[j])
        {
            s=arr[i];
            arr[i]=arr[j];
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
 selectionsort(arr,x);
  for(int i =0;i<x;i++){cout<<arr[i];}
}