//https://leetcode.com/problems/kth-largest-element-in-an-array/ (M)
// To find the Kth largest item in the array, we just sort the array
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        // Once it is sorted return the element that is K from the size to get the Kth largest element
        // Ex: 1st largest would return index at size - 1 or the last element in the sorted array
        return(nums[nums.size()-k]);
    }
};
