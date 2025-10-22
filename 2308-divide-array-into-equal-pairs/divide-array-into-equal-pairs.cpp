class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int>freq;
        for(auto i : nums){
            freq[i]++;
        }
        for(auto  val : freq){
            if(val.second % 2!=0){
                return false;
            }
        }
        return true;
    }
};