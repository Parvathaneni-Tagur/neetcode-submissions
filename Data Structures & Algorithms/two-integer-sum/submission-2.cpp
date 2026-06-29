class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mapp;
        for (int i = 0; i < nums.size(); i++) {
            int required = target - nums[i];
            if (mapp.contains(required)) {
                return {mapp[required], i};
            }
            mapp[nums[i]] = i;
        }
        return {};
    }
};
