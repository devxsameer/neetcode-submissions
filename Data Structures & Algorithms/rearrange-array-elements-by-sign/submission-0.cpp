class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        for(int num: nums){
            if(num > 0){
                pos.push_back(num);
            }else{
                neg.push_back(num);
            }
        }
        vector<int> res;
        int i = 0;
        while(i < nums.size()){
            if(i % 2 == 0){
                res.push_back(pos[i / 2]);
            }else{
                res.push_back(neg[i / 2]);
            }
            i++;
        }

        return res;
    }
};