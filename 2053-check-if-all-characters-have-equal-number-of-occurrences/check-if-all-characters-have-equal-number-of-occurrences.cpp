class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>freq;
        for(auto i:s){
            freq[i]++;
        }
        int first=freq[s[0]];
        for(auto val:freq){
            if(val.second!=first){
                return false;
            }
        }
        return true;
    }
};