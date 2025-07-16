class Solution {
public:
    string reverseOnlyLetters(string s) {
        string ans="";
        int rev=0;
        int st=0;
        int end=s.size()-1;
        while(end>st){
            if(!isalpha(s[st])){
                st++;
                continue;
            }
            else if (!isalpha(s[end])){
                end--;
                continue;
            }
            else{
                swap(s[st],s[end]);
            }
            st++;
            end--;
        }
        return s;
    }
};