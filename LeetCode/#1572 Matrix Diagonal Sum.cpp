// https://leetcode.com/problems/matrix-diagonal-sum/ (E)
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int size = mat.size();
        if(size == 1)
        {
            return mat[0][0];
        }
        int d1 = 0, d2 = 0;
        for(int i = 0; i < size; i ++)
        {
            if(size % 2 != 0 && i == (size - 1) - i)
            {
                cout<<"entered";
                d1 += mat[i][i];
            }
            else
            {
                d1 += mat[i][i];
                d2 += mat[i][size-1-i];
            }
        }
        return d1 + d2;
    }
};
