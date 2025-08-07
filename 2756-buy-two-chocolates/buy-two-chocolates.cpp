class Solution {
public:
    int buyChoco(vector<int>& p, int money) {
        // int sum=0;
        // int rem;
        // int maxi=INT_MIN;
        // for(int i=0;i<p.size();i++){
        //     sum=p[i]+p[i+1];
        //     rem=money-sum;
        //     maxi=max(rem,maxi);
        // }
        // if(maxi>=0){
        //     return maxi;
        // }
        // else{
        //     return money;
        // }
        sort(p.begin(),p.end());
        int sum=(money - (p[0]+p[1]));
        if(sum>=0){
            return sum;
        }
        else{
            return money;
        }
    }
};