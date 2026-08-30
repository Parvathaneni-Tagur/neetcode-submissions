class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> result;
        for (int i = 0; i < nums.size() - 1; i++) {
            set<int> st;
            for (int j = i + 1; j < nums.size(); j++) {
                int req = -(nums[i] + nums[j]);
                if (st.find(req) != st.end()) {
                    result.insert({nums[i], nums[j], req});
                }
                st.insert(nums[j]);
            }
        }

        vector<vector<int>> final;
        for (auto c : result) {
            final.push_back(c);
        }
        return final;
    }
};
