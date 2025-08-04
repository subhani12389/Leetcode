class Solution {
public:
    int numberOfMatches(int n) {
        int sum=0;
        int rem=0;
        int rev=0; 
        while(n>1){
            if(n%2==0){
                sum+=n/2;
                rem=n/2;
                n=rem;
            }
            else{
                sum+=(n-1)/2;
                rev=(n-1)/2+1;
                n=rev;
            }
        }
        return sum;
    }
};