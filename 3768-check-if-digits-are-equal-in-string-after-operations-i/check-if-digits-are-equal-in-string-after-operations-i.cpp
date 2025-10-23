class Solution {
public:
    bool hasSameDigits(string s) {
        int copy=s.size();
        while(copy>2){
            string result="";
            for(int i=0;i<copy-1;i++){
                int sum=((s[i]-'0')+(s[i+1]-'0'))%10;
                result+=to_string(sum);
            }
            copy=result.size();
            s=result;
        }
        return s[0] == s[1];
    }
};