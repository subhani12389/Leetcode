class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
        int maxi=INT_MIN;
        int st=0;
        int end=num.size()-2;
        while(end>=st){
            string ph="";
            if(num[st]==num[st+1] && num[st]==num[st+2] && int (num[st])>maxi){
                ph+=num[st];
                ph+=num[st+1];
                ph+=num[st+2];
                ans=ph;
                maxi=int(num[st]);
            }
            st++;
        }
        return ans;
    }
};