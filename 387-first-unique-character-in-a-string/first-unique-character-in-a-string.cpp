class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>freq;
        for(auto i:s){
            freq[i]++;
        }
        int st=0;
        int end=s.size()-1;
        while(end>=st){
            if(freq[s[st]]==1){
                return st;
            }
            st++;
        }
        return -1;
    }
};