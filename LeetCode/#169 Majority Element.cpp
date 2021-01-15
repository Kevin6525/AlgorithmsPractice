// The goal is to find the element that occurs the most times in an array
// To do this, we will have a map that keeps track of the number of occurences for each element in the array
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Note: We are supposed to return the element that occurs the most, not how many times it occurs
        // We will need to keep track of both to do the problem
        // maxInt will be the maximum element and max will represent how many times it appears
        int maxInt;
        int max = 0;
        unordered_map<int,int> m;
        //We iterate through the array and each time we come across an element we increase its occurences by 1
        for(int i = 0; i < nums.size(); i ++)
        {
            m[nums[i]] ++;
        }
        //Now we iterate through the map and check for the largest occurence value
        for(auto itr = m.begin(); itr != m.end(); itr ++)
        {
            //Everytime we find a new max occurence, we update the max value and maxInt value
            if(itr->second > max)
            {
                max = itr->second;
                maxInt = itr->first;
            }
        }
        //Return the element that appears the most
        return maxInt;
    }
};
