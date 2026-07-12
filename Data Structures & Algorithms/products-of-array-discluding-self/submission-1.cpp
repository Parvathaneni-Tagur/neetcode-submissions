class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l = nums.size();
        vector<int> result(l, 1);
        vector<int> sufix(l, 1);
        vector<int> prefix(l, 1);

        for (int i = 1; i < nums.size(); i++) {
            prefix[i] = nums[i - 1] * prefix[i - 1];
        }
        for (int i = nums.size() - 2; i >= 0; i--) {
            sufix[i] = sufix[i + 1] * nums[i + 1];
        }
        for (int i = 0; i < nums.size(); i++) {
            result[i] = prefix[i] * sufix[i];
        }
        return result;
    }
};
