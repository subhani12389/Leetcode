class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st=0;
        int end=nums.size()-1;
        vector<int>ans1;
        vector<int>ans2;
            bool first=false;
            bool second=false;    
            while(end>=st){
                if(nums[st]==target){
                    ans1.push_back(st);
                    first=true;
                    break;
                }
                st++;
            }
            while(end>=st){
                if(nums[end]==target){
                    ans1.push_back(end);
                    second=true;
                    break;
                }
                end--;
                }
            if(first ==true && second==true ){
                return ans1;
            }
            else{
                return {-1, -1};
            }
    }
};