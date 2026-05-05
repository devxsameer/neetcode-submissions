class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        int idx = 0;

        vector<int> nums1Copy(nums1.begin(),nums1.begin() + m);

        while(idx < m + n){
            if(j >= n || ( i < m && nums1Copy[i] <= nums2[j])){
                nums1[idx++] = nums1Copy[i++]; 
            }else{
                nums1[idx++] = nums2[j++];
            }
        }
    }
};