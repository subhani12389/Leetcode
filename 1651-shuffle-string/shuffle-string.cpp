class Solution {
public:
    string restoreString(string s, vector<int>& in) {
        string result = s;   
        for(int i = 0; i < s.length(); i++) {
            result[in[i]] = s[i];   
        }
        return result;
    }
};
