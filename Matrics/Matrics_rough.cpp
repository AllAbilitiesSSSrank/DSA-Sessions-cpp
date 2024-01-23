#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> M;
    
    int r, c , x;
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
   // for(int i = 0 ; i<r ; i++)
    //{
     //   x = find(M[i].begin() , M[i].end() , 0);
        
    //}

    vector<int> :: iterator it;
    it = find(M[1].begin() , M[1].end() , 0);
    
    cout<<it - M[1].begin() <<endl;





    for(auto i : M)
    {
        for(auto j : i){
         cout<<j<<" ";
        }
        cout<<endl;
    }
}