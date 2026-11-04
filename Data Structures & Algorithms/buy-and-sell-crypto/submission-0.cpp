class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int result = 0, maxx = 0;
        for (int i = 0; i < prices.size() - 1; i++) {
            result = 0;
            for (int j = i + 1; j < prices.size(); j++) {
                if (prices[i] > prices[j]) {
                    continue;
                } else {
                    result = abs(prices[j] - prices[i]);
                }
                maxx = max(result, maxx);
            }
        }
        return maxx;
    }
};
