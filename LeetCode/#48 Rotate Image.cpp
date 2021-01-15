//https://leetcode.com/problems/rotate-image/ (M)
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        //Transpose matrix
        for(int i = 0; i < n; i ++)
        {
            for(int k = i; k < n; k ++)
            {
                int temp = matrix[k][i];
                matrix[k][i] = matrix[i][k];
                matrix[i][k] = temp;
            }
        }
        //Reverse matrix
        for(int i = 0; i < n; i ++)
        {
            for(int k = 0; k < n/2; k ++)
            {
                int temp = matrix[i][k];
                matrix[i][k] = matrix[i][n-1-k];
                matrix[i][n-1-k] = temp;
            }
        }
    }
};
