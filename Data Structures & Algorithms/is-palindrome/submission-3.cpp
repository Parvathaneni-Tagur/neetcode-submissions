class Solution {
   public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;
        while (start < end) {
            char st = s[start];
            char ed = s[end];
            if (!isalnum(st)) {
                start++;
                continue;
            }
            if (!isalnum(ed)) {
                end--;
                continue;
            }
            if (tolower(st) != tolower(ed)) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
