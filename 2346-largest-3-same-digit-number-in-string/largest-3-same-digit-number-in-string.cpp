class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
        int maxi=INT_MIN;
        for(int i=0;i<num.size()-2;i++){
            string ph="";
            if(num[i]==num[i+1] && num[i]==num[i+2] && int (num[i])>maxi){
                ph+=num[i];
                ph+=num[i+1];
                ph+=num[i+2];
                ans=ph;
                maxi=int(num[i]);
            }
        }
        return ans;
    }
};