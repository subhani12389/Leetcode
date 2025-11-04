class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n= nums.size();
        vector<int>result;
        for(int i=0;i<=n-k;i++){
            unordered_map<int,int>freq;
            for(int j=i; j<i+k;j++){
                freq[nums[j]]++;
            }

        vector<pair<int,int>> vec(freq.begin(),freq.end());

        sort(vec.begin(),vec.end() ,[] (pair<int,int> &a , pair<int,int>&b){
        if (a.second == b.second)
            return a.first > b.first;
        return a.second > b.second;
        });
            int count=0; 
            int sum=0;
            for(auto &val: vec){
                if(count <x){
                    sum+=val.first*val.second;
                    count+=1;
                }
                else{
                    break;
                }
            }
            result.push_back(sum);
        }
        return result;
    }
};