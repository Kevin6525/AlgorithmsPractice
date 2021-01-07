// We are finding the final destination given 2d vector of strings following the form of ["City1", "City2"] ["City2", "City3"]
// City 3 Would be the result since it is the final destination and we can't go anywhere from there
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, string> m;
        // We are going to use a map having the city we start in being the key and the city we travel to be the value
        // Iterate through and add to the map. The 0th index is always the location traveling from and the 1st index is always the destination
        for(int i = 0; i < paths.size(); i ++)
        {
            m[paths[i][0]] = paths[i][1];
        }
        // We iterate through the map and if the destination does not appear as a place we travel from, then it is the final destination
        for(auto itr = m.begin(); itr != m.end(); itr++)
        {
            if(m.count(itr->second) == 0)
            {
                return itr->second;
            }
        }
        return "NULL";
    }
};
