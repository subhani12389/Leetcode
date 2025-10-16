class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& group) {
        int n=group.size();
        vector<vector<int>>result;
        vector<vector<int>>mp(n+1);
        for(int i=0;i<n;i++){
            int l=group[i];
            mp[l].push_back(i);

            if(mp[l].size()==l){
                result.push_back(mp[l]);
                mp[l]={};
           }
        }
        return result;
    }
};