class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>freq;

        for(auto i : nums){
            freq[i]++;
        }
        for(auto val: freq){
            if(val.second>=2){
                return val.first;
                break;
            }
        }
        return -1;
    }
};