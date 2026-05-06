class Solution {
   public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        threshold *= k;
        int count = 0;
        int currSum = 0;
        int i = 0;
        int j = 0;
        while (j < arr.size()) {
            while(j - i < k){
                currSum += arr[j++];
            }
            if (currSum >= threshold) {
                count++;
            }
            currSum -= arr[i++];
        }
        return count;
    }
};