class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> unique(nums.begin(), nums.end());
        int sum = 0;
        int maxi = INT_MIN;

        for (int i : unique) {
            if (i > 0) {
                sum += i;
            }
            // Always update maxi
            maxi = max(maxi, i);
        }

        // If no positive numbers found, return max (may be negative or 0)
        return sum > 0 ? sum : maxi;
    }
};
