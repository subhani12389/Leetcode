class Solution {
public:
    int countHillValley(vector<int>& nums) {
    int count=0;
    vector<int>num;
    num.push_back(nums[0]);
    for(int  i=1;i<nums.size();i++){
        if(nums[i]!=nums[i-1]){
            num.push_back(nums[i]);
        }

    }

    for(int i=1;i<num.size()-1;i++){
        if(num[i]>num[i-1] && num[i]>num[i+1]){
            count++;
        }else if(num[i]<num[i-1] && num[i]<num[i+1]){
            count++;
        }
    }
    return count;
    }
};