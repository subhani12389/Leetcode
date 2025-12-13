class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int copy=k;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                if(copy<k){
                    return false;
                }
                copy=0;
            }
            else{
                copy++;
            }
        }
        return true;
    }
};