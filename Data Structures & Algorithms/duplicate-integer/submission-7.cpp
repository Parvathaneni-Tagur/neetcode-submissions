class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(), nums.end());
        // for (int num : nums) {
        //     seen.insert(num);
        // }
        if (nums.size() == seen.size()) return false;
        return true;
    }
};