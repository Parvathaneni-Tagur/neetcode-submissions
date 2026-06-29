class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        vector<bool> seen(strs.size(), false);
        int cnt = 0;
        for (int i = 0; i < strs.size(); i++) {
            if (seen[i])
                continue;
            if (cnt >= result.size()) {
                result.resize(cnt + 1);
            }
            result[cnt].push_back(strs[i]);
            seen[i] = true;
            for (int j = i + 1; j < strs.size(); j++) {
                string st1 = strs[i];
                string st2 = strs[j];
                sort(st1.begin(), st1.end());
                sort(st2.begin(), st2.end());

                if (st1 == st2) {
                    result[cnt].push_back(strs[j]);
                    seen[j] = true;
                }
            }
            cnt++;
        }
        return result;
    }
};
