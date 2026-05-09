class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int idx = m + n - 1;
       int l = m - 1, r = n - 1;
       while(idx >= 0){
            if(r < 0 || (l >= 0 && nums2[r] <= nums1[l])){
                nums1[idx] = nums1[l--];
            }else if (l < 0 || (r >= 0 && nums2[r] > nums1[l])){
                nums1[idx] = nums2[r--];
            }
            idx--;
       }
    }
};