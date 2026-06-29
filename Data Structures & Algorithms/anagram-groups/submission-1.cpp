class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> umap;
        vector<vector<string>> result;
        for (auto str : strs) {
            string st1 = str;
            sort(st1.begin(), st1.end());
            umap[st1].push_back(str);
        }
        for (auto i : umap) {
            result.push_back(i.second);
        }
        return result;
    }
};
