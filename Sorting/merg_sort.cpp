#include<bits/stdc++.h>
using namespace std;
void Merge(int arr[] , int low , int mid , int high)
{
    vector<int> temp;
    int x=low,y=mid+1;
    while(x<=mid && y<=high)
    {
        if(arr[x]<arr[y])
        {
            temp.push_back(arr[x]);
            x++;
        }
        else
        {
            temp.push_back(arr[y]);
            y++;
        }
    }

    while (x<=mid)
    {
        temp.push_back(arr[x]);
        x++;
    }
     while ( y<=high)
    {
        temp.push_back(arr[y]);
        y++;
    }

    for(int i = low ; i<=high ; i++)
    {
        arr[i] = temp[i-low];
    }
}
void Mergsort(int arr[] ,int low , int high)
{
    if(low>=high){return;}
  int mid = (low+high)/2;
  Mergsort(arr , low ,mid);
  Mergsort(arr ,mid+1 ,high);
  Merge(arr , low , mid , high);  
}

int main()
{
 int x;
 cin>>x;
 int arr[x];
 for(int i =0;i<x;i++){cin>>arr[i];}
 Mergsort(arr,0 , x);
  for(int i =0;i<x;i++){cout<<arr[i];}
}