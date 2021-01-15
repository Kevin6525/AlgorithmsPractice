// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/ (E)
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int index1 = 0;
        int index2 = numbers.size() - 1;
        while(index1 < index2)
        {
            int sum = numbers[index1] +numbers[index2];
            if(sum < target)
            {
                index1 ++;
            }
            else if(sum > target)
            {
                index2 --;
            }
            else
            {
                vector<int> result{index1 + 1, index2 + 1};
                return result;
            }
        }
        vector<int> result{index1 + 1, index2 + 1};
        return result;
    }
};
