class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> nums;
        for(int i = 0; i < matrix.size(); i ++)
        {
            for(int k = 0; k < matrix.size(); k ++)
            {
                nums.push_back(matrix[i][k]);
            }
        }
        sort(nums.begin(), nums.end());
        return(nums[k-1]);
    }
};
