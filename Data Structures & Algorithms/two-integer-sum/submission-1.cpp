class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> twomap;
        for (int i = 0; i < nums.size(); i++) {
            twomap[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            int required = target - nums[i];
            auto it = twomap.find(required);
            if (it != twomap.end() && it->second != i) {
                return {i, it->second};
            }
        }
        return {0, 0};
    }
};
