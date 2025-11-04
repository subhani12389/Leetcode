class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;
        for(auto i : nums){
            freq[i]++;
        }
        int duplicate = -1, missing = -1;

        for(auto val : freq){
            if(val.second == 2){
                duplicate=val.first;
            }
        }

        for(int i=1;i<=n;i++){
            if(freq.count(i)==0){
                missing =i;
            }
        }
        return {duplicate,missing};
    }
};