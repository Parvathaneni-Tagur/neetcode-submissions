class Solution {
   public:
    string mergeAlternately(string word1, string word2) {
        int w1 = word1.size(), wo1 = 0;
        int w2 = word2.size(), wo2 = 0;
        string result = "";
        while (w1 > 0 && w2 > 0) {
            result += word1[wo1];
            wo1++;
            w1--;
            result += word2[wo2];
            wo2++;
            w2--;
        }
        while (w1 > 0) {
            result += word1[wo1];
            wo1++;
            w1--;
        }
        while (w2 > 0) {
            result += word2[wo2];
            wo2++;
            w2--;
        }
        return result;
    }
};