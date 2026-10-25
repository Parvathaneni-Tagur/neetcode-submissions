class Solution {
   public:
    string mergeAlternately(string word1, string word2) {
        int w1 = word1.size();
        int w2 = word2.size();
        int i = 0, j = 0;
        string result = "";
        while (w1 > i || w2 > j) {
            if (w1 > i) {
                result += word1[i];
                i++;
            }
            if (w2 > j) {
                result += word2[j];
                j++;
            }
        }

        return result;
    }
};