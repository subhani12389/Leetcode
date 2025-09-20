class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>result;
        int totalresult=0;
        int t=1;
        for(int i=0;i<arr.size();i++){
            while(t<arr[i]){
                result.push_back(t);
                t++;
            }
            if(t==arr[i])t++;
        }
        if(result.size()<k){
            totalresult=arr[arr.size()-1]+(k-result.size());
        }
        else{
        for(int i=1;i<=result.size();i++){
            if(i==k){
                totalresult+=result[i-1];
            }
        }
        }
        return totalresult;
    }
};