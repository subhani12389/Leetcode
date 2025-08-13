class Solution {
public:
    bool isPowerOfThree(int n) {
        double result=0;
        int st=0;
        while(pow(3,st)<=n){
            result=pow(3,st);
            if(result==n){
                return true;
            }
            st++;
        }
        return false;
    }
};