#include<bits/stdc++.h>
using namespace std;
int main()
{
    int left=0,right=0;
    int len=0;
    int size  = 5;
    int sum=0;
    int k = 3;
    int arr[5]={2,1,1,1,3};
    
    sum=arr[0];

    while(right<size )
    {
        while(left<=right && sum>k)
        {
            sum-=arr[left];
            left++;
        }
        if(sum==k)
        {
            len = max(len , right-left+1);
        }
        right++;
        if(right<size)
        {
            sum+=arr[right];
        }
    }
    cout<<len;
}