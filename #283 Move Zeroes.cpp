class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index2 = 0;
        for(int i = 0; i < nums.size(); i ++)
        {
            if(nums[i]!= 0)
            {
                swap(nums[i], nums[index2]);
                index2 ++;
            }
        }
    }
};
 
