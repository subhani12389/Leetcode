class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>result;
        sort(nums.begin(),nums.end());
        int st=0;
        int end=nums.size();
        while(st<end){
            if(nums[st]==target){
                result.push_back(st);
            }
            st++;
        }
        return result;
    }
};