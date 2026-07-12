class Solution {
   public:
    string encode(vector<string>& strs) {
        string result;
        for (auto& st : strs) {
            int len = st.size();
            string str = to_string(len) + "/:" + st;
            result += str;
        }
        cout << result << endl;
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while (i < s.size()) {
            int delimindex = s.find("/:",i);
            int stringlen = stoi(s.substr(i, delimindex - i));
            int wordstart = delimindex + 2;
            string subs = s.substr(wordstart, stringlen);
            result.push_back(subs);
            i = wordstart + stringlen;
        }
        return result;
    }
};
