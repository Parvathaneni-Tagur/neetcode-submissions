class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        for (int i = 0; i < strs[0].size(); i++) {
            for (string s : strs) {
                if (i == s.length() || strs[0][i] != s[i]) {
                    return s.substr(0, i);
                }
            }
        }
        return strs[0];
    }
};