class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0;
        long long streak=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                streak+=1;
                count+=streak;
            }
            else{
                streak=0;
            }
        }
        
        return count;
    }
};