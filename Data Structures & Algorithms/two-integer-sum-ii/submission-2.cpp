class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0;
        int end = numbers.size() - 1;
        while (start < end) {
            int result = numbers[start] + numbers[end];
            if (result == target) {
                return {start + 1, end + 1};
            } else if (target < result) {
                end--;
            } else {
                start++;
            }
        }
        return {-1, -1};
    }
};
