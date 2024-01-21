#include<bits/stdc++.h>
using namespace std;
void reverse(int x[] , int start , int end)
{
    int temp;
    while(start<=end)
    {
        temp=x[start];
        x[start] = x[end];
        x[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int x[10] ={1,2,3,4,5,6,7,8,9,10};
    int s;
    cin>>s;
    reverse(x , 0 , s-1);
    reverse(x , s , 9);
    reverse(x , 0 , 9);
    for(int i : x)
    {
        cout<<i<<" ";
    }

}