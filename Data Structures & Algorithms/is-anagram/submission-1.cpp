class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, int> ss;
        unordered_map<char, int> st;
        for (char s1 : s) {
            ss[s1]++;
        }
        for (auto t1 : t) {
            st[t1]++;
        }
        return ss == st;
    }
};
