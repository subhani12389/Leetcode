class Solution {
public:
    int totalMoney(int n) {
        int sum=0;
        int mon=1;
        while(n!=0){
            int i=mon+1;
            sum+=mon;
            n=n-1;
            mon+=1;
            while(i<mon+6 && n!=0){
                sum+=i;
                n=n-1;
                i+=1;
            }
        }
        return sum;
    }
};