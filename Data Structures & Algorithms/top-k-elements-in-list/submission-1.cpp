class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> ans;
        vector<int> result;
        for (int num : nums) {
            ans[num]++;
        }
        vector<pair<int, int>> pairr;
        for (auto a : ans) {
            pairr.push_back({a.second, a.first});
        }
        sort(pairr.rbegin(), pairr.rend());
        for (int i = 0; i < k; i++) {
            result.push_back(pairr[i].second);
        }
        return result;
    }
};
