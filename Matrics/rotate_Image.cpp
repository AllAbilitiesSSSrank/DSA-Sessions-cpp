#include<bits/stdc++.h>
using namespace std;

    int main() {
        vector<vector<int>> matrix;
        vector<int>b;
        b.push_back(1);b.push_back(2);b.push_back(3);b.push_back(4);
        matrix.push_back(b);
        matrix.push_back(b);
        matrix.push_back(b);
        matrix.push_back(b);

        int s = matrix[0].size();
        int a[s][s];
        for(int i = 0 ; i <s ; i++)
        {
            for(int j = 0 ; j<s ; j++)
            {
                a[j][s-1-i] = matrix[i][j];
            }
        }
        for(int i = 0 ; i <s ; i++)
        {
            for(int j = 0 ; j<s ; j++)
            {
                 matrix[i][j] = a[i][j];
                 cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

    }
