class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>freq;
        for(auto i:s){
            freq[i]++;
        }
        for(int j=0;j<s.size();j++){
            if(freq[s[j]]==1){
                return j;
                break;
            }
        }
        return -1;
    }
};