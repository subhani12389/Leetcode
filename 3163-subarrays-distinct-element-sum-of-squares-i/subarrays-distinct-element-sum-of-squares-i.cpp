class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            set<int>result;
            for(int j=i;j<nums.size();j++){
                result.insert(nums[j]);
                int diff=result.size();
                count+=diff*diff;
            }
        }
        return count;
    }
};