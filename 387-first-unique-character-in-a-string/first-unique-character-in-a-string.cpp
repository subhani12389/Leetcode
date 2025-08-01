class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>freq;
        for(auto i:s){
            freq[i]++;
        }
        for(int i=0;i<s.length();i++){
            if(freq[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};