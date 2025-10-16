class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int  n=A.size();
        vector<int>result;
        vector<int>all;
        for(int i=0;i<n;i++){
            all.push_back(A[i]);
            int count=0;
            for(int j=0;j<all.size();j++){
                for(int k=0;k<=i;k++){
                    if(all[j]==B[k]){
                        count+=1;
                        break;
                    }
                }
            }
            result.push_back(count);
        }
        return result;
    }
};