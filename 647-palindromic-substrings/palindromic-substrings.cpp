class Solution {
public:
    int countSubstrings(string s) {
        string result="";
        int count=0;
        for(int i=0;i<s.size();i++){
            string st="";
            for(int j=i;j<s.size();j++){
                st+=s[j];
                string copy=st;
                result+=st;
                // string rescopy=result;
                reverse(copy.begin(),copy.end());
                if(copy==st){
                    count+=1;
                }
                copy="";
            }
        }
        return count;
    }
};