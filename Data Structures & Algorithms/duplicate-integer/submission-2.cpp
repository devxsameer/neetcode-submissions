class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> res;
        for (auto num : nums) {
            if (res.find(num) != res.end()) return true;
            res.insert(num);
        }
        return false;
    }
};