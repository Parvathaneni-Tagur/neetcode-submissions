class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int i = 0;  // buying day
        int j = 1;  // selling day
        int n = prices.size();
        int maxProfit = 0;
        int prof = 0;
        while (j < n) {
            if (prices[i] > prices[j]) {
                i = j;
                j++;
            } else {
                prof = prices[j] - prices[i];
                maxProfit = max(prof, maxProfit);
                j++;
            }
        }
        return maxProfit;
    }
};
