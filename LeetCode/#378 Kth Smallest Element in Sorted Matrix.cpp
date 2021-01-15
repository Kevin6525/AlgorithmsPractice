// This program requires we return the Kth Smallest Element in a sorted matrix.
// Note this matrix is only sorted row by row. But if we were to read in all the rows, it may not be sorted
// Ex: 1 2 3
//     0 2 3
//     0 1 2
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        // We will do this problem by reading in each row of the matrix and putting it into a single vector
        vector<int> nums;
        // Add each element into the vector from the matrix
        for(int i = 0; i < matrix.size(); i ++)
        {
            for(int k = 0; k < matrix.size(); k ++)
            {
                nums.push_back(matrix[i][k]);
            }
        }
        // Sort the vector
        sort(nums.begin(), nums.end());
        // Since we want the Kth smallest element, return the K -1 element in the vector
        // Use - 1 because of the 0 based indexing
        return(nums[k-1]);
    }
};
