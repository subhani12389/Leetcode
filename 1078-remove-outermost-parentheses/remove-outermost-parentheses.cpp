class Solution {
public:
    string removeOuterParentheses(string s) {
        int counter=0;
        string result="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' && counter == 0){
                counter+=1;
            }
            else if(s[i]=='(' && counter !=0){
                result.push_back(s[i]);
                counter+=1;
            }
            else if(s[i]==')' && counter !=1){
                result.push_back(s[i]);
                counter-=1;
            }
            else if(s[i]==')' && counter==1){
                counter-=1;
            }
        }
        return result;
    }
};