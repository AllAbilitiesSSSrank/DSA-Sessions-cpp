#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> M;
    
    int r, c , x , Y;
    cin>>r;
    cin>>c;
    for(int i = 0 ; i<r ; i++)
    {
        vector<int> A;
        for(int j =0 ;j<c;j++)
        {
            cin>>x;
            A.push_back(x);
        }
        M.push_back(A);
    }
   //imp
    vector<int> :: iterator it;
    
   for(int i = 0 ; i<r ; i++)
    {
       it = find(M[i].begin() , M[i].end() , 0);
       Y = it - M[i].begin();
       if(Y >= r)
       {
        continue;
       }
       else{
        for(int j = 0 ; j<c ; j++)
        {
            if(M[j][Y]!=0)
            {
                M[j][Y]=-1;
            }
            if(M[Y][j]!=0)
            {
                M[Y][j]=-1;
            }
        }
       }
   }

    for(auto i : M)
    {
        for(auto j : i){
         cout<<j<<"";
        }
        cout<<endl;
    }
}