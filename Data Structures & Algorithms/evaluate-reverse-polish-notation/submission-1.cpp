class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "-" || tokens[i] == "+" || tokens[i] == "*" || tokens[i] == "/") {
                int first = stk.top();
                stk.pop();
                int second = stk.top();
                stk.pop();
                int result = 0;
                if (tokens[i] == "-") {
                    result = second - first;
                } else if (tokens[i] == "+") {
                    result = first + second;
                } else if (tokens[i] == "*") {
                    result = first * second;
                } else if (tokens[i] == "/") {
                    result = second / first;
                }
                stk.push(result);
            } else {
                int num = stoi(tokens[i]);
                stk.push(num);
            }
        }
        if (stk.empty()) {
            return -1;
        }
        return stk.top();
    }
};
