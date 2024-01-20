#include<bits/stdc++.h>
using namespace std;

int split(int arr[] , int low , int high)
{
    int i = low , j = high;
    int pvot = arr[ low ];
    while(i<j)
    {
        while (arr[i]<=pvot && i<=high-1)
        {
            i++;
        }
        while (arr[j]>pvot && j>=low+1)
        {
            j--;
        }
        if(i<j){swap(arr[i] , arr[j]);}
        
    }
    swap(arr[low] , arr[j]);
    return j;

}

void Quicksort(int arr[] ,int low ,int high)
{
   if(low<high)
   {
    int pIndex = split(arr , low , high);
    Quicksort(arr, low , pIndex-1);
    Quicksort(arr , pIndex+1 , high);
   }
}

int main()
{
 int x;
 cin>>x;
 int arr[x];
 for(int i =0;i<x;i++){cin>>arr[i];}
 Quicksort(arr,0,x-1);
  for(int i =0;i<x;i++){cout<<arr[i];}
}