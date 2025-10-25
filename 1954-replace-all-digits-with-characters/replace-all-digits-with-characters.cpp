class Solution {
public:
    string replaceDigits(string s) {
        string result="";
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                result+=(s[i] + s[i-1])-'0';
            }
            else{
                result+=s[i];
            }
        }
        return result;
    }
};