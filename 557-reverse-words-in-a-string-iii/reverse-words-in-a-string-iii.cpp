class Solution {
public:
    string reverseWords(string s) {
        string result="";
        string word = "";
        for(auto &i : s){
            if(i==' '){
                reverse(word.begin(),word.end());
                result+=word+" ";
                word="";
            }
            else{
                word+=i;
            }
        }
        reverse(word.begin(),word.end());
        result+=word;
        return result;
    }
};