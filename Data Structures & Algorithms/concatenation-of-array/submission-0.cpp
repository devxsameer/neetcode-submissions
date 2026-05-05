class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int len = nums.size();
        vector<int> result(len * 2);
        for(int i = 0; i < len; i++){
            int num = nums[i];
            result[i] = num;
            result[len + i] = num;
        }
        return result;
    }
};