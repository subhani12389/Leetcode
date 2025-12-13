class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int copy = k;   // initialize so first 1 doesn't fail
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                if (copy < k) {
                    return false;
                }
                copy = 0;   // reset distance after seeing 1
            } else {
                copy++;     // count zeros between 1s
            }
        }
        return true;
    }
};
