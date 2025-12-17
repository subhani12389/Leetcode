class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int st = nums[0];
        int end = *max_element(nums.begin(), nums.end());
        vector<int> result;
        int count = 0;

        for (int i = st + 1; i < end; i++) {
            if (find(nums.begin(), nums.end(), i) == nums.end()) {
                result.push_back(i);
                count += 1;
            }
        }

        if (count == 0) {
            return {};
        } else {
            return result;
        }
    }
};
