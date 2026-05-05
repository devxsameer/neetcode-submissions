class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        for (const auto& str : strs) {
            vector<int> temp(26, 0);
            for (char c : str) {
                temp[c - 'a']++;
            }
            string key = to_string(temp[0]);
            for (int i = 1; i < 26; ++i) {
                key += ',' + to_string(temp[i]);
            }
            mpp[key].push_back(str);
        }
        vector<vector<string>> res;
        for (const auto& pair : mpp) {
            res.push_back(pair.second);
        }
        return res;
    }
};
