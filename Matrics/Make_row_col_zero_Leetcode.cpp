
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<int>row;
        vector<int>col;
        for(int i = 0 ; i < r ; i++)
        {
            for(int j = 0 ; j < c ; j++)
            {
                if(matrix[i][j] == 0)
                {
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
         for(int j = 0 ; j<col.size() ; j++)
        {
           for(int i = 0 ; i< r ; i++)
            {
                if(matrix[i][col[j]] != 0 )
                {
                    matrix[i][col[j]] = 0;
                }
            }
        }
         for(int j = 0 ; j<c ; j++)
        {
           for(int i = 0 ; i< row.size() ; i++)
            {
                if(matrix[row[i]][j] != 0 )
                {
                    matrix[row[i]][j] = 0;
                }
            }
        }
 

    }
};