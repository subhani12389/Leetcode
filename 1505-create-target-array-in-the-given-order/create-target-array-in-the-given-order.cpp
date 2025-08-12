class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>freq;
        int n=nums.size();
        int m=index.size();
        for(int i=0;i<m;i++){
            freq.insert(freq.begin()+index[i],nums[i]);
        }
        return freq;
    }
};