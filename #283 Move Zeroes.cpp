//For this program we need to move all the zeroes to the back
//We can accomplish this by simply moving anything that isn't 0 to the front
//We also need to keep the same order of the values in the array so we need an extra variable to keep track of the index
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //This index is where the next non-zero value should go
        int index2 = 0;
        //We loop through the array from left to right to keep the order
        for(int i = 0; i < nums.size(); i ++)
        {
            //If the value is not a zero, we should move it to the first available spot for non-zero values
            //If the first value is a non-zero value, it would just swap with itself
            //After the swap we increment the index2 as the next non-zero value has to be after it
            if(nums[i]!= 0)
            {
                swap(nums[i], nums[index2]);
                index2 ++;
            }
        }
    }
};
 
