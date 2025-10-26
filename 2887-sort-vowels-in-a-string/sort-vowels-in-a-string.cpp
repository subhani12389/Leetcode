class Solution {
public:
    bool isVowel(char c ){
        return string("AEIOUaeiou").find(c)!=string::npos;
    }
    string sortVowels(string s) {
        int n=s.size();
        string result="";
        for(int i=0;i<n;i++){
            if(isVowel(s[i])){
                result+=s[i];
            }
        }
        sort(result.begin(),result.end());
        string result2="";
    int j=0;
        for(int i=0;i<n;i++){
                if(isVowel(s[i])){
                    result2+=result[j++];
                }
                else{
                    result2+=s[i];
                }
            }
        return result2;
    }
};