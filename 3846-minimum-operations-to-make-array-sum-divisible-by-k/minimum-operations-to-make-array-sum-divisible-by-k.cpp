class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int n:nums){
            sum+=n;
        }
        if(sum%k==0) return 0;
        return sum%k;
    }
};