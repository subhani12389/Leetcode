class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>freq;
        vector<int>result;
        for(auto i : nums){
            freq[i]++;
        }
        for(auto val : freq){
            if(val.second==1){
                result.push_back(val.first);
            }
        }
        return result;
    }
};