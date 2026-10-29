class Solution {
   public:
    int trap(vector<int>& height) {
        int start = 0;
        int end = height.size() - 1;
        int result = 0;
        if (height.empty()) {
            return result;
        }
        int leftmax = height[start];
        int rightmax = height[end];
        while (start < end) {
            if (leftmax < rightmax) {
                start++;
                leftmax = max(leftmax, height[start]);
                result += leftmax - height[start];
            } else {
                end--;
                rightmax = max(rightmax, height[end]);
                result += rightmax - height[end];
            }
        }
        return result;
    }
};
