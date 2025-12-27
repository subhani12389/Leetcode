class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int count=0;
        bool hasOdd=false;
        for(auto &val : mp){
            if(val.second%2==0){
                count+=val.second;
            }
            else{
                count+=val.second-1;
                hasOdd =true;
            }
        }
        if (hasOdd) count += 1;
            return count;
    }
};