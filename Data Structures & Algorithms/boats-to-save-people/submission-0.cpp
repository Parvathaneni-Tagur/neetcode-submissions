class Solution {
   public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int boats = 0;
        int end = people.size() - 1, start = 0;
        while (start <= end) {
            int sum = people[start] + people[end];
            if (sum <= limit) {
                start++;
            }
            end--;
            boats++;
        }
        return boats;
    }
};