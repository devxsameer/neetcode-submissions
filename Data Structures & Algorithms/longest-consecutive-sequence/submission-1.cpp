class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> stt;
        for(int num: nums){
            stt.insert(num);
        }
        int maxCount = 0;
        for(int i = 0; i < nums.size(); i++){
            if(stt.find(nums[i] - 1) == stt.end()){
                int count = 1;
                while(stt.contains(nums[i] + count)){
                    count++;
                }
                maxCount = max(maxCount, count);
            }
        }
        return maxCount;
    }
};
