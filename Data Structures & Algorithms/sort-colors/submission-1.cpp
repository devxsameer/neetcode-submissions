class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int num: nums){
            mpp[num]++;
        }
        int idx = 0;
        while(idx < nums.size())
        {
            int i = 0;
            while( i < 3){
                if(mpp[i] > 0){
                    nums[idx++] = i;
                    mpp[i]--;
                }else{
                    i++;
                }
            }
        }
    }
};