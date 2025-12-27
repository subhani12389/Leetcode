class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
    for(char c : s){
        mp[c]++;
    }

    int count = 0;
    bool hasOdd = false;

    for(auto &val : mp){
        if(val.second % 2 == 0){
            count += val.second;
        } else {
            count += val.second - 1;
            hasOdd = true;
        }
    }

    if(hasOdd) count += 1;
    return count;
    }
};