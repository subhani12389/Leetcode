class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>result;
        unordered_map<int,int>freq;
        for(auto i:nums){
            freq[i]++;
        }
        for(auto val:freq){
            if(val.second==2){
                result.push_back(val.first);
            }
        }
        return result;
    }
};