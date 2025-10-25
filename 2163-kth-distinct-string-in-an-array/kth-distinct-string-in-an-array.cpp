class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>freq;
        for(auto &i : arr){
            freq[i]++;
        } 
        int count=0;
        string result="";
        for(auto &val : arr){
            if(freq[val] ==1){
                count+=1;
                if(k==count){
                    result=val;
                    break;
                }
            }
        }
        return result;
    }
};