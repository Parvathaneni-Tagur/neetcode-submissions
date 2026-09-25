class MinStack {
   public:
    stack<int> datastack, minstack;
    MinStack() {}

    void push(int val) {
        datastack.push(val);
        if (minstack.empty()) {
            minstack.push(val);
        } else {
            minstack.push(min(val, minstack.top()));
        }
    }

    void pop() {
        datastack.pop();
        minstack.pop();
    }

    int top() { return datastack.top(); }

    int getMin() { return minstack.top(); }
};
