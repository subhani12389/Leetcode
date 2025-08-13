class Solution {
public:
    bool isPowerOfThree(int n) {
        int st=0;
        while(pow(3,st)<=n){
            if(pow(3,st)==n){
                return true;
            }
            st++;
        }
        return false;
    }
};