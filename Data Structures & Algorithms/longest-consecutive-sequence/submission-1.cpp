class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         if (nums.empty())
            return 0;
        int count = 1, maxcount = 1;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1] - 1) {
                count++;
            } else if (nums[i] == nums[i + 1]) {
                continue;
            } else {
                count = 1;
            }
            maxcount = max(count, maxcount);
        }
        return maxcount;
    }
};
