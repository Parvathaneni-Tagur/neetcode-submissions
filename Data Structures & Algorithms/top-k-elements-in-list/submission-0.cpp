class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mapp;
        for (int num : nums) {
            mapp[num]++;
        }
        vector<pair<int, int>> pmap;
        for (const auto& ma : mapp) {
            pmap.push_back({ma.second, ma.first});
        }
        sort(pmap.rbegin(), pmap.rend());

        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(pmap[i].second);
        }
        return ans;
    }
};
