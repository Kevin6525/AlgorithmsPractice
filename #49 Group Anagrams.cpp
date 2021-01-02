//https://leetcode.com/problems/group-anagrams/ (M)
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //Iterate through each word, add the word to map.
        //Sort the word in alphabetical order. If the word in alphabetical order is equal to the temp sorted word, push the
        //sorted word as the key and the word that is equal onto the vector. Note: key, value is: word, vector of words present in strs
        vector<vector<string>> result;
        unordered_map<string, vector<string>> m;
        for(int i = 0; i < strs.size(); i ++)
        {
            string tempKey = strs[i];
            sort(tempKey.begin(), tempKey.end());
            m[tempKey].push_back(strs[i]); 
        }
        for(auto itr = m.begin(); itr != m.end(); itr ++)
        {
            result.push_back(itr->second);
        }
        return result;
    }
};
