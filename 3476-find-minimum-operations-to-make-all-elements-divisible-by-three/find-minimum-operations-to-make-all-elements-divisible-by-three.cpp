class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%3!=0){
                if ((nums[i]-1) %3 ==0 || (nums[i]+1) %3 ==0){
                    count++;
                }
            }
        }
        if(count==0){
            return 0;
        }
        else{
            return count;
        }
    }
}; 