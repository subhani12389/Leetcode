class Solution {
public:
    int buyChoco(vector<int>& p, int money) {
        int sum=0;
        int rem;
        int maxi=INT_MIN;
        for(int i=0;i<p.size();i++){
            for(int j=i;j<p.size();j++){
                if(i!=j){
                    sum=p[i]+p[j];
                    rem=money-sum;
                    maxi=max(rem,maxi);
                } 
            }
        }
        if(maxi>=0){
            return maxi;
        }
        else{
            return money;
        }
    }
};