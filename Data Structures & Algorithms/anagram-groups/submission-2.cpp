class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mapp;
        for (auto str : strs) {
            string str1 = str;
            sort(str1.begin(), str1.end());
            mapp[str1].push_back(str);
        }
        vector<vector<string>> result;
        for (auto el : mapp) {
            result.push_back(el.second);
        }
        return result;
    }
};
