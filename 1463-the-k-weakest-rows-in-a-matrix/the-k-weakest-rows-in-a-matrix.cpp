class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> result;
        int m=mat.size();
        int n=mat[0].size();
        for(int i=0;i<m;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    count+=1;
                }
            }
            result.push_back({count,i});
        }
        sort(result.begin(),result.end());
        vector<int>result1;
        for(int i=0;i<k;i++){
            result1.push_back(result[i].second);
        }
        return result1;
    }
};