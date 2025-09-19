class Solution {
public:
    int maxDepth(string s) {
        int maxi=INT_MIN;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                count+=1;
            }
            else if(s[i]==')'){
                count-=1;
            }
            maxi=max(maxi,count);
        }
        return maxi;
    }
};