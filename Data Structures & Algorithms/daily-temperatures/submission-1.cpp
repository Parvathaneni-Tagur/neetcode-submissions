class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> stk;
        int n = temperatures.size();
        vector<int> result(n, 0);
        for (int i = 0; i < n; i++) {
            int te = temperatures[i];
            while (!stk.empty() && te > stk.top().first) {
                int val = stk.top().second;
                stk.pop();
                result[val] = i - val;
            }
            stk.push({te, i});
        }
        return result;
    }
};
