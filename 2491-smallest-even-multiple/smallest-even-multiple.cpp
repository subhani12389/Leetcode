class Solution {
public:
    int smallestEvenMultiple(int n) {
        int i=2;
        int sum=0;
        while(i!=0){
            if(i%n==0 && i%2==0){
                sum+=i;
                break;
            }
            i++;
        }
        return sum;
    }
};