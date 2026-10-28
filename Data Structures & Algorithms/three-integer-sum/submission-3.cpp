class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        set<int> st;
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int required = 0 - (nums[i] + nums[j]);
                if (st.find(required) != st.end()) {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(required);
                    sort(temp.begin(), temp.end());
                    if (find(result.begin(), result.end(), temp) == result.end())
                        result.push_back(temp);
                }
            }
            st.insert(nums[i]);
        }
        return result;
    }
};
