class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int N = nums.size();
        k = k % N;
        vector<int> temp(k);
        for(int i = 0; i < k; i++){
            temp[i] = nums[N - k + i];
        }
        for(int i = N - k - 1; i >= 0; i--){
            nums[i + k] = nums[i];
        }
        for(int i = 0; i <  k ; i++){
            nums[i] = temp[i];
        }
    }
private:
    void reverse(vector<int>& nums, int l, int r){
        while(l < r){
            swap(nums[l], nums[r]);
            l++;
            r--;
        }
    }
};