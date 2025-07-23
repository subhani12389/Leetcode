class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string res="";
        for(auto i :words){
            string temp=i;
            reverse(temp.begin(),temp.end());
            if(temp==i){
                res+=temp;
                break;
            }
        }
       return res;
    }
};