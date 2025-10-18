class Solution {
public:
    string clearDigits(string s) {
        string result="";
        for(auto i : s){
            if(isdigit(i)){
                if(!result.empty())
                    result.pop_back();
            }
            else{
                result+=i;
            }
        }
        return result;
    }
};