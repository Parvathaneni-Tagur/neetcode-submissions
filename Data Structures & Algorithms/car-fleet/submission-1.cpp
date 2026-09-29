class Solution {
   public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        int n = position.size();
        for (int i = 0; i < n; i++) {
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.rbegin(), cars.rend());
        stack<double> stk;
        for (auto& car : cars) {
            double result = (double)(target - car.first) / car.second;
            if (stk.empty() || stk.top() < result) {
                stk.push(result);
            }
        }
        return stk.size();
    }
};
