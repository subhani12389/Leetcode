class Solution {
public:
    int strStr(string hay, string need) {
        int n=hay.find(need);
        for(auto i : hay){
            if(n!=string::npos){
                return int(n);
            }
        }
        return -1;
    }
};