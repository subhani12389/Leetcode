class Solution {
public:
    int maxFreqSum(string s) {
        string vol="aeiou";
        unordered_map<char,int>freq;
        int maxi=0;
        int maxi1=0;
        for(auto i : s){
            freq[i]++;
        }
        for(auto val : freq){
            if(vol.find(val.first)!=string::npos){
                maxi=max(maxi,val.second);
            }
            else{
                maxi1=max(maxi1,val.second);
            }
        }
        return maxi+maxi1;
    }
};