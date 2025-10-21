class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        for(int i=maxi;i>=1;i--){
            if(maxi%i==0 && mini%i==0){
                return i;
                break;
            }
        }
        return 1;
    }
};