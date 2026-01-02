class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto i : nums){
            freq[i]++;
        }
        for(auto val:freq){
            if(val.second>1){
                return val.first;
            }
        }
        return -1;
    }
};