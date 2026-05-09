class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      int n = nums.size();
      unordered_set<int> stt;
      for(const int& num: nums){
        stt.insert(num);
      }
      int res = 0;
      for(const int& num: nums){
        if(stt.find(num - 1) == stt.end()){
            int count = 1;
            while(stt.find(num + count) != stt.end()){
                count++;
            }
            res = max(res, count);
        }
      }
      return res;
    }
};
