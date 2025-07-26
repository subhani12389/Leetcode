class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;
        for(auto val:s){
            freq[val]++;
        }
        vector<pair<char,int>>vec(freq.begin(),freq.end());
        sort(vec.begin(),vec.end(),[](auto &a, auto &b) {
            return a.second > b.second;
        });
        string ans = "";
        for (auto x : vec) {
            ans += string(x.second,x.first);
        }
        return ans;
    }
};