class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n=nums.size();
       int len=n/3;
       unordered_map<int,int>freq;
       vector<int>ans;
       for(auto i:nums){
            freq[i]++;
       } 
       for(auto val:freq){
            if(val.second>len){
                ans.push_back(val.first);
            }
       }
        sort(ans.begin(),ans.end());
        return ans;
    }
};