class Solution {
public:
    bool isPowerOfFour(int n) {
        double result=0;
        int i=1;
        if (n==1) return true;
        while(result<=n){
            result=pow(4,i);
            if(result==n){
                return true;
            }
            i++;
        }
        return false;
    }
};