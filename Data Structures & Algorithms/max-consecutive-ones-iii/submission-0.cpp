class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int res = 0;
        int curr = 0;
        int currFlip = 0;
        int l = 0, r = 0;
        while(r < nums.size()){
            if(nums[r] == 1){
                curr++;
                r++;
            }else if(nums[r] == 0 && currFlip < k){
                curr++;
                currFlip++;
                r++;
            }
            else{
                if(nums[l] == 0){
                    currFlip--;
                }
                l++;
                curr--;
            }
            res = max(curr, res);
        }
        return res;
    }
};