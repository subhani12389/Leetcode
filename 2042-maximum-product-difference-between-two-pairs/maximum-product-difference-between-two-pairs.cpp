class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int st=0;
        int end=nums.size()-1;
        int pro;
        int pro1; 
        while(end>=st){
            pro=nums[end]*nums[end-1];
            pro1=nums[st]*nums[st+1];
            break;
        }
        return pro-pro1;
    }
};