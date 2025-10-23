class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int n=cost.size();
        int mini=INT_MAX;
        vector<int>result;
        for(int i=0;i<n;i++){
            mini=min(mini,cost[i]);
            result.push_back(mini);
        }
        return result;
    }
};