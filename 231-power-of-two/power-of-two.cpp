class Solution {
public:
    bool isPowerOfTwo(int n) {

        // if (n <= 0) return false;
        int x=0;

        while(pow(2,x)<=n){
            if(n==pow(2,x)){
                return true;
            }
            x++;
        }
        return false;
    }
};