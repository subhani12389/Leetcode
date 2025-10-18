class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> n(nums1.begin(), nums1.end());
        set<int> m(nums2.begin(), nums2.end());

        vector<int> result1, result2;

        for (auto x : n) {
            if (m.find(x) == m.end()) {
                result1.push_back(x);
            }
        }

        for (auto y : m) {
            if (n.find(y) == n.end()) {
                result2.push_back(y);
            }
        }

        return {result1, result2};
    }
};
