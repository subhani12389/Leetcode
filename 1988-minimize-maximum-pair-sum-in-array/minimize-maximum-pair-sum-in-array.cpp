class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int st=0;
        int end=nums.size()-1;
        int maxi=INT_MIN;
        int sum;
        while(st<end){
            sum=nums[st]+nums[end];
            maxi=max(sum,maxi);
            st++;
            end--;
        }
        return maxi;    }
};