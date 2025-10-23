class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int>freq;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                freq[grid[i][j]]++;
            }
        }
        int repeted=-1;
        int missing=-1;
        int N = grid.size();
        for(int num=1;num<=N*N;num++){
            if(freq[num]==2){
                repeted=num;
            }
            if(freq[num]==0){
                missing=num;
            }
        }

        return {repeted,missing};
    }
};