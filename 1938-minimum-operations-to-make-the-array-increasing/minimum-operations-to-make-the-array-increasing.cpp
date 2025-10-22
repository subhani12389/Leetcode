class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0; i<n-1;i++){
            if(nums[i]<nums[i+1]){
                continue;
            }
            else{
                nums[i+1]=nums[i+1]+1;
                count+=1;
                i--;
            }
        }
        return count;
    }
};