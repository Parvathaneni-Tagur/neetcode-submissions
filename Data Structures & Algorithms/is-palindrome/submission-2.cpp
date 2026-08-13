class Solution {
   public:
    bool isPalindrome(string s) {
        if (s.empty()) {
            return true;
        }
        int start = 0, end = s.size() - 1;
        while (start < end) {
            if (!isalnum(s[start])) {
                start++;
                continue;
            } else if (!isalnum(s[end])) {
                end--;
                continue;
            }
            if (tolower(s[start]) != tolower(s[end])) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
