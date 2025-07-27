class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum=0;
        int maxi=INT_MIN;
        int count=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                sum+=prices[i]-prices[i-1];
                maxi=max(sum,maxi);
                count++;
            }
        }
        if(count<=0){
            return 0;
        }
        else{
            return maxi;
        }
    }
};