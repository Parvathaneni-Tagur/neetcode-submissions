class Solution {
   public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 1;
        vector<int> result;
        if (nums.empty()) return result;
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                count++;
            } else {
                if ((nums.size() / 3) < count) {
                    result.push_back(nums[i - 1]);
                }
                count = 1;
            }
        }
        if (count > n / 3) {
            result.push_back(nums.back());
        }
        return result;
    }
};