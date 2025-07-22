class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int sum1=0;
        int rem=0;
        for(auto i : nums){
            sum+=i;
            int x=i;
            while(x>0){
               rem=x%10;
               sum1+=rem;
               x=x/10;
            }
        }
        return sum-sum1;
    }
};