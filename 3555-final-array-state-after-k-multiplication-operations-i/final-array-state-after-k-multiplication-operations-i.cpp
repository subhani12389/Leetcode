class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n=nums.size();
        while(k!=0){
            int mini=nums[0];
            int minindex=0;
            for(int i=0;i<n;i++){
                if(mini > nums[i]){
                    mini=nums[i];
                    minindex=i;
                }
            }
            nums[minindex]=nums[minindex]*multiplier;
            k--;
        }

        return nums;

    }
};