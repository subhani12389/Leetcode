class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count=0;
        int st=0;
        int end=nums.size()-1;
        while(end>=st){
            if(nums[st]<k){
                count++;
            }
            st++;
        }
        return count;
    }
};