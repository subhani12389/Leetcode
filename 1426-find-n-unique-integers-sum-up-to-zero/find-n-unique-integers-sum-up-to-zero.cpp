class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>result(n);
        int start=1;
        int i=0;
        int j=n-1;
        while(i<j){
            result[i]=start;
            result[j]=-start;
            i++;
            j--;
            start++;
        }
        if(i==j){
            result[i]=0;
        }
        return result;
    }
};