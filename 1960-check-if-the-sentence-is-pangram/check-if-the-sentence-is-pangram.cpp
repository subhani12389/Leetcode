class Solution {
public:
    bool checkIfPangram(string s) {
        string st="abcdefghijklmnopqrstuvwxyz";
        if(s.size()<26){
            return false;
        }
        for(auto i :st){
            if(s.find(i)==string::npos){
                return false;
            }
        }
        return true;
    }
};