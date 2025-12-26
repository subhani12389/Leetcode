class Solution {
public:
    int findMaxK(vector<int>& nums) {
        // int result=-1;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[i]==(-nums[j])){
                    return nums[j];
                }
            }
        }
        return -1;
    }
};