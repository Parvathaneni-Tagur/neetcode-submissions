class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l = nums.size();
        vector<int> result(l, 1);

        for (int i = 1; i < nums.size(); i++) {
            result[i] = nums[i - 1] * result[i - 1];
        }
        int sufix = 1;
        for (int i = nums.size() - 2; i >= 0; i--) {
            sufix = sufix * nums[i + 1];
            result[i] = result[i] * sufix;
        }
        return result;
    }
};
