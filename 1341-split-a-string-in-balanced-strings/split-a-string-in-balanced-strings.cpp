class Solution {
public:
    int balancedStringSplit(string s) {
        int right=0;
        int left=0;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='R'){
                right+=1;
            }
            else{
                left+=1;
            }
            if(right==left){
                count+=1;
            }
        }
        return count;
    }
};