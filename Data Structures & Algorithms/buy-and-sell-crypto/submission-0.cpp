class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        int l = 0, r = 1;
        while(r < prices.size()){
           if(prices[r] > prices[l]){
            int profit = prices[r] - prices[l];
            maxi = max(maxi, profit);
           }else{
            l = r;
           }
           r++;
        }
        return maxi;
    }
};
