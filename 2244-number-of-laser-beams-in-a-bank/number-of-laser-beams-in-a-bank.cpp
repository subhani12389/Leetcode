class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int sum=0;
        int prevcount=0;
        for(int i=0;i<bank.size();i++){
            int curcount=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1'){
                    curcount+=1;
                }
            }
            if(curcount>0){
                sum+=prevcount*curcount;
                prevcount=curcount;
            }
        }
        return sum;
    }
};