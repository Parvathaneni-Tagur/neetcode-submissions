class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> mp;
        int req = 0;
        for (int i = 0; i < numbers.size(); i++) {
            req = target - numbers[i];
            auto it = mp.find(req);
            if (it != mp.end()) {
                int j = it->second;
                return {j + 1, i + 1};
            }
            mp.insert({numbers[i], i});
        }
        return {-1, -1};
    }
};
