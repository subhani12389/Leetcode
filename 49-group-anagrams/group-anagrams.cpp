class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>result;

        unordered_map<string,vector<string>>mp;
        int n=strs.size();
        for(int i=0;i<n;i++){
            string temp=strs[i];

            sort(temp.begin(),temp.end());

            mp[temp].push_back(strs[i]);
        }

        for(auto i : mp){
            result.push_back(i.second);
        }

        return result;
    }
};