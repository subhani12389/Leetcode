class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3) return false;
        string vowel="aeiouAEIOU";
        bool hasvowel=false , hascon=false;
        for(auto ch:word){
            if(!isalnum(ch)) return false;
            if(isalpha(ch)){
                if(vowel.find(ch)!=string::npos){
                    hasvowel=true;
                }
                else{
                    hascon=true;
                }
            }
        }

        return hasvowel && hascon;
    }
};