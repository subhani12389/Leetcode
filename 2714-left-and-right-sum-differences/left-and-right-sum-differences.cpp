class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>freq1;
        vector<int>freq2;
        vector<int>result;
        // nums.insert(nums.begin(),0);
        freq1.push_back(0);
        for(int i=1;i<nums.size();i++){
            freq1.push_back(freq1.back() + nums[i-1]);
        }
        for(int i=0;i<nums.size();i++){
            freq2.push_back(accumulate(nums.begin()+i+1 , nums.end(),0));
        }
        for(int i=0;i<nums.size();i++){
            result.push_back(abs(freq1[i]-freq2[i]));
        }
        return result;
    }
};