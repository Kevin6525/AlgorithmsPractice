class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, string> m;
        for(int i = 0; i < paths.size(); i ++)
        {
            m[paths[i][0]] = paths[i][1];
        }
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
