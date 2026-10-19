class Solution {
   public:
    string encode(vector<string>& strs) {
        string result;
        for (int i = 0; i < strs.size(); i++) {
            int len = strs[i].size();
            string temp = to_string(len) + "*/" + strs[i];
            result += temp;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while (i < s.size()) {
            int delimindex = s.find("*/",i);
            int strsize = stoi(s.substr(i, delimindex - i));
            int wordstart = delimindex + 2;
            string sub = s.substr(wordstart, strsize);
            result.push_back(sub);
            i = wordstart + strsize;
        }
        return result;
    }
};
