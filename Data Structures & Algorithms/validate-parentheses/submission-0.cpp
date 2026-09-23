class Solution {
   public:
    bool isValid(string s) {
        stack<char> stk;
        for (char ch : s) {
            if (ch == '(' || ch == '[' || ch == '{') {
                stk.push(ch);
            } else {
                if (stk.empty()) {
                    return false;
                }
                char cr = stk.top();
                if ((cr == '[' && ch == ']') || (cr == '{' && ch == '}') ||
                    (cr == '(' && ch == ')')) {
                    stk.pop();
                } else {
                    return false;
                }
            }
        }
        return stk.empty();
    }
};
